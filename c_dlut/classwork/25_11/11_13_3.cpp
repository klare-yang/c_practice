//计算每名学生总分
#include <stdio.h>

int scores[100][11];
int i,j;

void calculateTotalScores(int scores[][11],int m,int n,int totals[]){  //为什么（）里这么写
    printf("");
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){  //第m个学生
        printf("第i名学生的成绩为:");
        for(i=0;i<n;i++){
            scanf("%d",scores[m][i]);  //处理n个输入
            totals[m]+=scores[m][i];
        }
    }
}

int main(){
    for(int i=0;i<m;i++)
        printf("学生i的总分:",totals[i]);
}