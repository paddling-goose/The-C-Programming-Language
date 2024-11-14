#include<stdio.h>

/*输入一串数字（正负）输出它的反转），保留正负号*/
int main(){
    int n=0;
    scanf("%d",&n);
    if(n<0){
      printf("-");
      n=-n;
    }
    int sum =0;
    while(n){
        sum = sum*10+n%10; //把数字的位数变高，不需要先判断位数是不是0
        n /=10;
    }
    printf("%d",sum);
    return 0;
}
