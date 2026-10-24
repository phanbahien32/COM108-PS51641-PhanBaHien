#include <stdio.h>
void tinhTrungBinhSoChan() {
    int min, max, tong = 0, bienDem = 0;
    printf("Nhap min: "); scanf("%d", &min);
    printf("Nhap max: "); scanf("%d", &max);
    if (min > max) {
        printf("Khong co so nao chia het cho 2 trong khoang da nhap!\n");
        return;
    }
    for (int i = min; i <= max; i++) {
        if (i % 2 == 0) {
            tong += i;
            bienDem++;
        }
    }
    if (bienDem > 0) {
        printf("Tong cac so chia het cho 2: %d\n", tong);
        printf("So luong cac so chia het cho 2: %d\n", bienDem);
        printf("Trung binh cong: %.2f\n", (float)tong / bienDem);
    } else {
        printf("Khong co so nao chia het cho 2 trong khoang da nhap!\n");
    }
}
void kiemTraSoNguyenTo() {
    int x, laSoNguyenTo = 1;
    printf("Nhap so nguyen x: "); scanf("%d", &x);
    if (x < 2) {
        printf("%d khong phai la so nguyen to.\n", x);
        return;
    }
    for (int i = 2; i <= x - 1; i++) {
        if (x % i == 0) {
            laSoNguyenTo = 0;
            break;
        }
    }
    if (laSoNguyenTo) printf("%d la so nguyen to.\n", x);
    else printf("%d khong phai la so nguyen to.\n", x);
}
void kiemTraSoChinhPhuong() {
    int x, isSoChinhPhuong = 0;
    printf("Nhap so nguyen x: "); scanf("%d", &x);

    if (x == 0) {
        printf("%d la so chinh phuong.\n", x);
        return;
    }

    for (int i = 1; i <= x; i++) {
        if (i * i == x) {
            isSoChinhPhuong = 1;
            break;
        }
    }

    if (isSoChinhPhuong) printf("%d la so chinh phuong.\n", x);
    else printf("%d khong phai la so chinh phuong.\n", x);
}
int main() {
    int luaChon;
    do {
        printf("\n+---------------------------------------------------+\n");
        printf("|              MENU CHUONG TRINH LAB 4              |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Tinh trung binh tong cac so chia het cho 2     |\n");
        printf("| 2. Kiem tra So nguyen to                          |\n");
        printf("| 3. Kiem tra So chinh phuong                       |\n");
        printf("| 4. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-4): ");
        scanf("%d", &luaChon);
        switch (luaChon) {
            case 1: tinhTrungBinhSoChan(); break;
            case 2: kiemTraSoNguyenTo(); break;
            case 3: kiemTraSoChinhPhuong(); break;
            case 4: printf("Da thoat chuong trinh.\n"); break;
            default: printf("Lua chon khong hop le! Vui long nhap lai trong khoang (1-4).\n"); break;
        }
    } while (luaChon != 4);
    return 0;
}