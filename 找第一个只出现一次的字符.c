#include<stdio.h>
#define MAXLINE 100000

void getLine(char s[]);
char findKChar(char *pString);

int main(){
    char s[MAXLINE];
    getLine(s);      /*读入字符串*/
    
    char c=findKChar(s);
    if(c=='\0')
        printf("no");
    else
        printf("%c",c);

    return 0;
}

void getLine(char s[]){
    int i,c;
    for(i=0;i<MAXLINE-1 && (c=getchar())!='\n';i++)
        s[i]=c;
    s[i++]='\0';
}

char findKChar(char *pString){
          
    if(pString == "")
    return '\0';

    int hashTable[256];
    for( int i = 0; i < 256; ++ i)
        hashTable[i] = 0;

    char* pHashKey = pString;
    while(*pHashKey != '\0'){
        hashTable[*pHashKey]++;
        pHashKey++;
    }

    pHashKey = pString;
    while(*pHashKey != '\0'){
        if(hashTable[*pHashKey] == 1)
            return *pHashKey;
            pHashKey++;
        }
    return '\0';
}
