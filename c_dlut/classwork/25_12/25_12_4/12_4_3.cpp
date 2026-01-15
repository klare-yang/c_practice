#include <stdio.h>

int main(){
    int a[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    
    int (*p)[4]=a; //指向整行
    
    printf("原数组:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",p[i][j]);  //直接写地址
        }
        printf("\n");
    }

    p[2][2]=99;

    printf("\n修改后:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
}