#include <stdio.h>
int main(){
    float canh, cao, s;
    printf("Mời nhập vào chiều dài cạnh đáy của tam giác: ");
    scanf("%f", &canh);
    printf("Mời nhập vào chiều cao của tam giác: ");
    scanf("%f", &cao);
    s = (canh * cao)/2;
    printf("Diện tích của tam giác là: %.2f", s);
    return 0;
}