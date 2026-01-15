/*计算节省的钱数*/

#include <stdio.h>

void calcSaveMoney(int (*p)[4],int (*q)[4]){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("原价%d元,折扣价%d元,省%d元\n",
               /* *(*(p+i*4)+j),
                *(*(q+i*4)+j),
                *(*(p+i*4)+j)-*(*(q+i*4)+j));*/
                p[i][j],
                q[i][j],
                p[i][j] - q[i][j]);
        }
    }
}

int main(){
    int ori[][4]={{10,25,15,8},{30,18,22,12},{20,9,16,8}};
    int dis[][4]={{8,20,12,6},{25,15,18,10},{16,7,13,23}};
    calcSaveMoney(ori,dis);
}