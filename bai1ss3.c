#include <stdio.h>
int main(){
  char name[100];
  printf("Mời nhập tên của bạn: \n");
  scanf("%s", &name);
  printf("Xin chào %s", name);
  return 0;

}