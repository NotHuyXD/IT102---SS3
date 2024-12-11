#include <stdio.h>
int main(){
    float pi=3.14, R;
    double cvi, dtich;
    printf("Mời nhập vào bán kính hình tròn:");
    scanf("%f", &R);
    cvi = 2*R*pi;
    dtich= pi*R*R;
    printf("Chu vi của hình tròn là: %.2lf\n", cvi);
    printf("Diện tích của hình tròn là: %.2lf", dtich);
    return 0;


    
}