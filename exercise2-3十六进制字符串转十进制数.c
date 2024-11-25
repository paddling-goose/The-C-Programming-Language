#include<stdio.h>
#include<math.h>

#define MAXLINE 100
int getline(char s[]){
    int i=0,c=0;
    for(i=0;i<MAXLINE-1 && (c=getchar())!=EOF && c!='\n';i++)
        s[i]=c;
    if(c=='\n'){
        s[i]=c;
        i++;
    }
    s[i]='\0';
    return i;
}

/*htoi：把16进制数(字符串形式）转化为10进制数*/
int htoi(char s[],double len){
    int sum=0;
    if(s[0]!='0' || (s[1]!='x' && s[1]!='X')){
    return EOF;
    }else{
      int i=2;
      while(s[i]!='\n'){
        if(s[i]>='0'&&s[i]<='9'){
        sum+=(s[i]-'0')*pow(16.0,len-i-2);
        i++;
        }else if(s[i]>='a'&& s[i]<='f'){
        sum+=(s[i]-'a'+10)*pow(16.0,len-i-2);
        i++;
        }else if(s[i]>='A'&& s[i]<='F'){
        sum+=(s[i]-'A'+10)*pow(16.0,len-i-2); 
        i++;
        }
      }
    return sum;
    }
}

int main(){
    char s[MAXLINE];
    int len=0;
    while((len=getline(s))>=0){
        printf("%d\n",htoi(s,(double)len));
    }
}
