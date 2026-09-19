#include <stdio.h>
int main(){
    int namSinh;  //%d
    float diemTB; //%f

    printf("Nhap nam sinh");
    scanf("%d",&namSinh);
    printf("Nhap diem:");
    scanf("%f",&diemTB);
    //xuat
    printf("namSinh: %d\n",namSinh);
    printf("Tuoi: %d\n",2026 -namSinh);
    printf("diemTB: %f\n",diemTB);

    return 0;
}