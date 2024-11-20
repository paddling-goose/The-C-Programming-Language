#include<stdio.h>
/*把较长的输入行"折"成短一些的两行或多行,折行的位置在输入行的第n列之前的最后一个非空格之后。*/
/*要保证程序能够智能地处理输入行很长以及 在指定的列前没有空格或制表符时的情况。*/
int main(){

    int n,c,i;
    c=n=i=0;
    printf("输入你想要的每行的个数\n");
    scanf("%d ",&n);             
    while((c=getchar())!=EOF){          
        
        if(i<n && (c==' ' || c=='\t')){
            printf("\n");
            i=0;
        }else if(i==n){
            printf("\n");
            i=0;
        }

        printf("%c",c);
        ++i; 
    } 
}
