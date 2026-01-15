#include <stdio.h>

int main()
{
    int i,n=-1;
    float sum=0;
    do{
        scanf("%d",&i);
        sum+=i;
        n++;
    }while(i>=0);
    sum += 1;
    printf("AVE=%.2f\n",sum/n);
    return 0;
}