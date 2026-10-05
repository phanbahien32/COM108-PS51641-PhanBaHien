#include <stdio.h>

int main() {
    float a, b, x;

    printf("Nhap a: ");
    scanf("%f", &a);

    printf("Nhap b: ");
    scanf("%f", &b);

    x = (float)-b / a;

    printf("Nghiem cua phuong trinh la: x = %.2f\n", x);

    return 0;
}