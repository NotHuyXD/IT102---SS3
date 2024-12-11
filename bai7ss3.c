#include <stdio.h>
int main(){
    int dig1, dig2, dig3, dig4, N, tong;
    printf("Mời nhập vào 1 số nguyên có 4 chữ số: ");
    scanf("%d", &N);
    dig1= N/1000;
    dig2= (N%1000)/100;
    dig3= (N%100)/10;
    dig4= N%10;
    tong = dig1+dig2+dig3+dig4;
    printf("Tổng các chữ số trong số nguyên đó là: %d", tong);
    return 0;


}