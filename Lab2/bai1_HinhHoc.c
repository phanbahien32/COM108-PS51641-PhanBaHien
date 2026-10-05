#include <stdio.h>

#define PI 3.14159

int main() {
    float dai, rong, r;

    printf("Nhap chieu dai: ");
    scanf("%f", &dai);

    printf("Nhap chieu rong: ");
    scanf("%f", &rong);

    printf("Nhap ban kinh: ");
    scanf("%f", &r);

    printf("Chu vi hinh chu nhat: %.2f\n", (dai + rong) * 2);
    printf("Dien tich hinh chu nhat: %.2f\n", dai * rong);

    printf("Chu vi hinh tron: %.2f\n", 2 * PI * r);
    printf("Dien tich hinh tron: %.2f\n", PI * r * r);

    return 0;
}

