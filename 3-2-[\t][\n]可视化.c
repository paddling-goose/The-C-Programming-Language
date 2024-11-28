#include<stdio.h>
#define MAXLINE 100


/*read a line into s, return its length*/
int getline(char s[]){
    int c,i;

    for(i=0; i<MAXLINE-1 && (c=getchar())!=EOF; ++i)
         s[i] = c;
    i++;
    s[i]='\0';
    return i;
}

/*put s into t and make newline and tab visable*/
void escape(char s[],char t[]){
   int i,j;
   i=j=0;
   while(s[i]!='\0'){
     switch(s[i]){
        case '\t':
          t[j++]= '\\';
          t[j++]='t';
          break;
        case '\n':
          t[j++]='\\';
          t[j++]='n';
          break;
        default:
          t[j++]=s[i];
          break;
     }
    i++;
   }
   t[++j]='\0';
}

int main(){
    char s[MAXLINE],t[MAXLINE];
    getline(s);
    escape(s,t);
    printf("%s",t);
}
