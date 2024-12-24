#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct holdIDs{
    char IDnumber[19];
    char Birthday[9];
};

int compare(const void*a,const void *b){
    int index =strcmp(((struct holdIDs*)a)->Birthday,((struct holdIDs*)b)->Birthday);
    if(index==0)
        return -strcmp(((struct holdIDs*)a)->IDnumber,((struct holdIDs*)b)->IDnumber);
    else
        return -index;
}


int main(){
    int n=0;
    scanf("%d ",&n);
    
    struct holdIDs *IDs;
    IDs = (struct holdIDs*)malloc(sizeof(struct holdIDs)*n);

    for(int i=0;i<n;i++){
        gets(IDs[i].IDnumber);
        strncpy(IDs[i].Birthday,IDs[i].IDnumber+6,8);
    }

    qsort(IDs,n,sizeof(struct holdIDs),compare);

    for(int i=0;i<n;i++)
        puts(IDs[i].IDnumber);
    
    return 0;
}