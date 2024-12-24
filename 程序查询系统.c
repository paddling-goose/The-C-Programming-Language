#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    char name[20];
    int score;
}stuInfo;

/*找到对应的同学并且返回他的序号*/
int findName(stuInfo student[],char name2find[], int n);

int main(){
    char command[10];
    int n=0;             //系统中学生的总人数
    stuInfo *student= NULL;

    while (1){
        scanf("%s",command);
        if(strcmp(command,"insert")==0){
            n++;

            stuInfo *new_student = realloc(student,sizeof(stuInfo) *n);  //分配内存
            if(new_student == NULL){
                perror("realloc failed");
                free(student);
                exit(1);
            }
            student = new_student;

            scanf("%s %d",student[n-1].name,&student[n-1].score);
        }else if(strcmp(command,"find")==0){
            char name2find[20];
            scanf("%s",name2find);

            int num=findName(student,name2find,n);
            
            if(num!=EOF){
                printf("%d\n",student[num].score);
            }else{
                printf("-1\n");
            }    
        }else if(strcmp(command,"end")==0){
            break;
        }
    }
    
    free(student);
    return 0;
}

int findName(stuInfo student[],char name2find[],int n){
    int max=-1,final =-1;
    for(int i=0;i<n;i++){
        int index = strcmp(student[i].name,name2find);
        if(index==0){
            if(student[i].score>max){
                max =student[i].score;
                final=i;
            }
        }
    }
    return final;  
}