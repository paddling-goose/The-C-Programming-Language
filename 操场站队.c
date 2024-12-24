#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char name[20];
    char gender;
    int height;
}stuInfo;

int compare(const void* a,const void*b){
    int index1= ((stuInfo*)a)->gender-((stuInfo*)b)->gender;
    if(index1 !=0 ){
        return -index1;
    }else{
        int index2 = ((stuInfo*)a)->height-((stuInfo*)b)->height;
        if(index2 !=0){
            return index2;
        }else{
            return strcmp(((stuInfo*)a)->name,((stuInfo*)b)->name);
        }
    }
}

int main(){ 
    int n = 0;
    scanf("%d",&n);

    stuInfo* chart =NULL;
    chart = (stuInfo*)malloc(sizeof(stuInfo)*n);

    for (int i = 0; i < n; i++)
        scanf("%s %c %d", chart[i].name, &chart[i].gender, &chart[i].height);

    qsort(chart,n,sizeof(stuInfo),compare);

    for (int i = 0; i < n; i++)
        printf("%s %c %d\n", chart[i].name, chart[i].gender, chart[i].height);

    free(chart);

    return 0;

}