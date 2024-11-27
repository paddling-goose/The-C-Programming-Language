#include<stdio.h>
#define MAXLINE 1000
int main(){
    char s[MAXLINE],c;
    int i=0;
    while((c=getchar())&& c!='!')
        s[i++]=c;
    for(int j=i-1;j>=0;j--)          //原来这里写的是j=i,变成从\0开始输出了
        printf("%c",s[j]);
    return 0;
}
