#include <stdio.h>
int main(){
    float degC, degF;
    printf("Mời nhập nhiệt độ: ");
    scanf("%f", &degC);
    degF = degC * (9/5) +32;
    printf("Nhiệt độ bạn vừa nhập là: %f độ C tương đương với %f độ F", degC,degF);
    return 0;


}