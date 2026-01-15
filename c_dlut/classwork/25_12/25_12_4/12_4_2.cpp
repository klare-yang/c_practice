#include <stdio.h>

int main(){
    int a[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int *p=&a[0][0];  //指向单个位置
    
    printf("原数组:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",a[i][j]);  //a[i][j]即为地址🤔
        }
        printf("\n");
    }

    *(p+2*4+2)=99;  //直接加就行，也可以是p+10；

    printf("\n修改后:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}