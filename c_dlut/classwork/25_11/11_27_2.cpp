#include <stdio.h>
 
int main(){
    printf("请输入：");
    int a[100],*p=a;
    for(int i=0;i<10;i++){
        scanf("%d",p);
        p++;
    }
    
    int sum=0;
    for(int i=0;i<10;i++){
        sum+=a[i];
    }
    printf("总和：%d\n",sum);
    
    int max=a[0];
    for(int i=0;i<10;i++){
        if(max<a[i])
            max=a[i];
    }
    printf("最大值：%d\n",max);

    int even=0;
    for(int i=0;i<10;i++){
        if(a[i]%2 == 0)
            even++;
    }
    printf("偶数个数：%d\n",even);
}