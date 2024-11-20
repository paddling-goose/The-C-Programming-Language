#include<stdio.h>
#define MAXLINE 1000

/*read a line into s,return its length*/
int getline(char s[],int lim){
    int c,i;

    for(i=0; i<lim-1 && (c=getchar())!=EOF; ++i){   
         s[i] = c;
    }
    s[++i]='\0';
    return i;
}

int main(){
    char s[MAXLINE];
    int i,temp=0;          //temp=0时允许输出
    int len =getline(s,MAXLINE);
    for(i=0;i<len;i++){
        if(s[i]=='/' && s[i+1]=='*' && temp==0){ //解决注释中出现/*
            i++;
            temp=1;
        }else if(s[i]=='*'&& s[i+1]=='/'){
            i+=2;
            temp=0;
        }else if(s[i]=='/' && s[i+1]=='/' && temp==0){
            i++;
            temp=2;
        }else if(temp==2 && s[i]=='\n')  //删除//形式的注释
            temp=0;
        
        if(temp==0){
            printf("%c",s[i]);
        }
    }
    return 0;
}
