#include<stdio.h>
#include<ctype.h>


/*对密文进行解密*/
int main(){
       char c;
       while((c=getchar())!=EOF){
          if(isalpha(c)&&'A'<=c&&c<='E'){
            putchar(c+21);
          }else if(isalpha(c)&&c>'E'){
            putchar(c-5);
          }else{
            putchar(c);
       }
       }
    return 0;     
}
