#include <stdio.h>

// Khai báo các hàm chức năng
void tinhHocLuc();
void giaiPTBacHai();
void tinhTienDien();

int main() {
    int luaChon;

    do {
        // Hiển thị Menu
        printf("\n========== MENU LAB 3 ==========\n");
        printf("1. Tinh hoc luc\n");
        printf("2. Giai phuong trinh bac hai\n");
        printf("3. Tinh tien dien\n");
        printf("0. Thoat\n");
        printf("================================\n");
        printf("Nhap lua chon: ");
        scanf("%d", &luaChon);

        // Điều hướng chức năng bằng switch-case
        switch (luaChon) {
            case 1:
                tinhHocLuc();
                break;

            case 2:
                giaiPTBacHai();
                break;

            case 3:
                tinhTienDien();
                break;

            case 0:
                printf("\nDa thoat chuong trinh!\n");
                break;

            default:
                printf("\nLua chon khong hop le! Vui long chon lai.\n");
        }

    } while (luaChon != 0);

    return 0;
}