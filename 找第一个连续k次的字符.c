#include<stdio.h>
#define MAXLINE 100000

void getLine(char s[]);
int findLetterK(char s[],int k);

int main(){
    char s[MAXLINE];
    int k;
    scanf("%d ",&k);
    getLine(s);      /*读入k和字符串*/
    
    int n;
    n=findLetterK(s,k);
    if(n==EOF)
        printf("No");
    else
        printf("%c",s[n]);

    return 0;
}

void getLine(char s[]){
    int i,c;
    for(i=0;i<MAXLINE-1 && (c=getchar())!='\n';i++)
        s[i]=c;
    s[i++]='\0';
}

int findLetterK(char s[],int k){
    int i,temp;
    for(i=0;s[i]!='\0';i++){
         temp =0;
         int t=i;
         while(s[i]==s[t++])
         temp ++;  
         if(temp>=k)
         return i;
    }
    return -1;
}
