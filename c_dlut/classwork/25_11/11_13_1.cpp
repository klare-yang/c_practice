//计算购物总价
#include <stdio.h>

float prices[10000];

float calculateTotal(float price[],int n){
    float sum=0;
    for(int i=0;i<n;i++){
        sum+=price[i];
    }
    return sum;
}

int main()
{
    int n;
    printf("请输入商品数量：");
    scanf("%d",&n);
    printf("请输入%d个商品的单价",n);
    for(int i=0;i<n;i++){
        scanf("%f",&prices[i]);
    }
    printf("总价：%.2f元",calculateTotal(prices,n));
    return 0;
}