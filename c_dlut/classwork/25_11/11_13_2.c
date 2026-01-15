//学生成绩等级统计
#include <stdio.h>

int scores[1000];
int n;
int counts[4]={0};

void countGrade(int scores[],int n,int counts[]){
    for(int i=0;i<n;i++){
        scanf("%d",&scores[i]);
        if(scores[i]>=90)
            counts[0]++;
        else if(scores[i]>=80 && scores[i]<90)
            counts[1]++;
        else if(scores[i]>=60 && scores[i]<80)
            counts[2]++;
        else
            counts[3]++;
    }
}

int main(){
    printf("请输入学生人数:");
    scanf("%d",&n);
    printf("\n请输入学生成绩:");
    countGrade(scores,n,counts);
    printf("\nA:%d\nB:%d\nC:%d\nD:%d",counts[0],counts[1],counts[2],counts[3]);
}