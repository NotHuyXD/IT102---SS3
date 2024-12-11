#include <stdio.h>
int main(){
    int dig1, dig2, dig3, dig4, N, reverse;
    printf("Mời nhập vào 1 số nguyên có 4 chữ số: ");
    scanf("%d", &N);
    dig1= N/1000;
    dig2= (N%1000)/100;
    dig3= (N%100)/10;
    dig4= N%10;
    reverse= (dig4*1000)+(dig3*100)+(dig2*10)+dig1;
    printf("Đảo ngược của số nguyên đó l: %d", reverse);
    return 0;


}