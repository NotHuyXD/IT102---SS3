#include <stdio.h>
int main(){
    float toan, van , anh, tbinh, tong;
    printf("Mời nhập vào điểm Toán: \n");
    scanf("%f", &toan);
    printf("Điểm Văn: ");
    scanf("%f", &van);
    printf("Điểm Anh: ");
    scanf("%f", &anh);
    tbinh = (toan + van + anh)/3;
    tong = toan + van + anh;
    printf("Tổng điểm 3 môn là: %.2f \n", tong);
    printf("Điểm trung bình cộng của 3 môn là: %.2f \n", tbinh);
    return 0;


}