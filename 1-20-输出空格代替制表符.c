#include<stdio.h>

/*输出恰当数目的空格代替制表符*/
/*制表符会自动补齐最小的8的倍数的空位*/


int main(){
    int c=0;
    int i=0;
    while((c=getchar())!=EOF){
        if(c=='\t'&& i==8){
            printf("        ");
            i=0;
        }else if(c=='\t' && i<8){
            for(int j=0;j<8-i;j++)
            printf(" ");
            i=0;
        }else{
            i++;
            printf("%c",c);
        }
    }
    return 0;
}
