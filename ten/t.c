#include <stdio.h>
#include <string.h>

int main() {
    struct Sinhvien {
        char mssv[30];
        char tenSV[30];
        float diem;
    } sv1;

    printf("Nhap MSSV: ");
    gets(sv1.mssv);
    printf("Nhap ten sinh vien: ");
    gets(sv1.tenSV);
    printf("Nhap diem: ");
    scanf("%f", &sv1.diem);
    printf("MSSV: %s\tTen sinh vien: %s\tDiem: %.2f", sv1.mssv, sv1.tenSV, sv1.diem);

    return 0;
}