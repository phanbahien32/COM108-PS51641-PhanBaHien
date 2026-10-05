#include <stdio.h>

int main() {
    float diem;
    int hanhKiem;

    printf("Nhap diem trung binh: ");
    scanf("%f", &diem);

    printf("Nhap hanh kiem (1: Tot, 0: Khac): ");
    scanf("%d", &hanhKiem);

    printf("Dieu kien diem trung binh >= 8: %d\n", diem >= 8);
    printf("Dieu kien hanh kiem tot: %d\n", hanhKiem == 1);
    printf("Ket qua xet hoc bong (1: Dat, 0: Khong dat): %d\n", (diem >= 8) && (hanhKiem == 1));

    return 0;
}