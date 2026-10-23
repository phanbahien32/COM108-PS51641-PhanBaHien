#include <stdio.h>
#include <math.h>

void tinhHocLuc(){
    float diem;
    printf("Nhap diem so (0.0 - 10.0): ");
    scanf("%f", &diem);
    if (diem < 0.0 || diem > 10.0) {
        printf("Diem so nhap vao khong hop le!\n");
    } else if (diem >= 9.0) {
        printf("Hoc luc: Xuat sac\n");
    } else if (diem >= 8.0) {
        printf("Hoc luc: Gioi\n");
    } else if (diem >= 6.5) {
        printf("Hoc luc: Kha\n");
    } else if (diem >= 5.0) {
        printf("Hoc luc: Trung binh\n");
    } else if (diem >= 3.5) {
        printf("Hoc luc: Yeu\n");
    }else {
        printf("Hoc luc: Kem\n");
    }
}

void giaiPTBachai() {
    float a, b, c;
    printf("Nhap ba he so a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem.\n");
                
            }
        }
    }
}
