
#include <stdio.h>
#include <string.h>

struct SinhVien {
    char mssv[50];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
};

struct SinhVien ds[50];
int n = 0;

void nhapXuat();
void sapXep();
void timKiem();
void hocBong();
void xuatMotSV(int i);

int main() {
    int chon;

    do {
        printf("\n+---------------------------------------------------+\n");
        printf("|              MENU CHUONG TRINH LAB 8              |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Nhap va xuat danh sach sinh vien               |\n");
        printf("| 2. Sap xep sinh vien theo diem tang dan           |\n");
        printf("| 3. Tim kiem sinh vien theo MSSV                   |\n");
        printf("| 4. Xuat sinh vien nhan hoc bong theo nganh        |\n");
        printf("| 5. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");
        printf("Xin moi chon chuc nang (1-5): ");
        scanf("%d", &chon);
        getchar();

        switch (chon) {
            case 1:
                nhapXuat();
                break;
            case 2:
                sapXep();
                break;
            case 3:
                timKiem();
                break;
            case 4:
                hocBong();
                break;
            case 5:
                printf("Thoat chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }

    } while (chon != 5);

    return 0;
}

void xuatMotSV(int i) {
    printf("Sinh vien thu %d:\n", i + 1);
    printf("MSSV: %s\n", ds[i].mssv);
    printf("Ten SV: %s\n", ds[i].tenSV);
    printf("Nganh hoc: %s\n", ds[i].nganhHoc);
    printf("Diem TB: %.2f\n\n", ds[i].diemTB);
}

// BAI 1: NHAP VA XUAT DANH SACH SINH VIEN
void nhapXuat() {
    int i;

    do {
        printf("Nhap so luong sinh vien (1-50): ");
        scanf("%d", &n);
        getchar();
    } while (n < 1 || n > 50);

    for (i = 0; i < n; i++) {
        printf("\nNhap sinh vien thu %d:\n", i + 1);

        printf("Nhap MSSV: ");
        fgets(ds[i].mssv, 50, stdin);
        ds[i].mssv[strcspn(ds[i].mssv, "\n")] = '\0';

        printf("Nhap ten sinh vien: ");
        fgets(ds[i].tenSV, 50, stdin);
        ds[i].tenSV[strcspn(ds[i].tenSV, "\n")] = '\0';

        printf("Nhap nganh hoc: ");
        fgets(ds[i].nganhHoc, 50, stdin);
        ds[i].nganhHoc[strcspn(ds[i].nganhHoc, "\n")] = '\0';

        do {
            printf("Nhap diem TB (0-10): ");
            scanf("%f", &ds[i].diemTB);
            getchar();
        } while (ds[i].diemTB < 0 || ds[i].diemTB > 10);
    }

    printf("\n===== DANH SACH SINH VIEN =====\n");

    for (i = 0; i < n; i++) {
        xuatMotSV(i);
    }
}

// BAI 2: SAP XEP SINH VIEN THEO DIEM TANG DAN
void sapXep() {
    int i, j;
    struct SinhVien svTemp;

    if (n == 0) {
        printf("Vui long nhap danh sach sinh vien truoc!\n");
        return;
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (ds[i].diemTB > ds[j].diemTB) {
                svTemp = ds[i];
                ds[i] = ds[j];
                ds[j] = svTemp;
            }
        }
    }

    printf("\n===== DANH SACH SAU KHI SAP XEP =====\n");

    for (i = 0; i < n; i++) {
        xuatMotSV(i);
    }
}

// BAI 3: TIM KIEM SINH VIEN THEO MSSV
void timKiem() {
    char ma[50];
    int i, timThay = 0;

    if (n == 0) {
        printf("Vui long nhap danh sach sinh vien truoc!\n");
        return;
    }

    printf("Nhap MSSV can tim: ");
    fgets(ma, 50, stdin);
    ma[strcspn(ma, "\n")] = '\0';

    for (i = 0; i < n; i++) {
        if (strcmp(ma, ds[i].mssv) == 0) {
            printf("\nTim thay sinh vien:\n");
            printf("MSSV: %s\n", ds[i].mssv);
            printf("Ten SV: %s\n", ds[i].tenSV);
            printf("Nganh hoc: %s\n", ds[i].nganhHoc);
            printf("Diem TB: %.2f\n", ds[i].diemTB);

            timThay = 1;
            break;
        }
    }

    if (timThay == 0) {
        printf("Khong tim thay sinh vien co MSSV: %s\n", ma);
    }
}

// BAI 4: XUAT SINH VIEN NHAN HOC BONG THEO NGANH
void hocBong() {
    int i, j, k;
    int coHocBong = 0;
    int daIn;

    if (n == 0) {
        printf("Vui long nhap danh sach sinh vien truoc!\n");
        return;
    }

    for (i = 0; i < n; i++) {
        if (ds[i].diemTB >= 8.0) {
            daIn = 0;

            for (j = 0; j < i; j++) {
                if (ds[j].diemTB >= 8.0 &&
                    strcmp(ds[i].nganhHoc, ds[j].nganhHoc) == 0) {
                    daIn = 1;
                    break;
                }
            }

            if (daIn == 0) {
                printf("\nNganh: %s\n", ds[i].nganhHoc);

                for (k = 0; k < n; k++) {
                    if (ds[k].diemTB >= 8.0 &&
                        strcmp(ds[i].nganhHoc, ds[k].nganhHoc) == 0) {
                        printf("- %s - %s - Diem TB: %.2f\n",
                               ds[k].mssv,
                               ds[k].tenSV,
                               ds[k].diemTB);
                    }
                }

                coHocBong = 1;
            }
        }
    }

    if (coHocBong == 0) {
        printf("Khong co sinh vien nao dat hoc bong.\n");
    }
}
