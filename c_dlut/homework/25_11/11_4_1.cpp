#include <stdio.h>
 int main()
{
    int a[10];
    for(int i=0;i<6;i++)
        scanf("%d",&a[i]);
    for(int j=5;j>=0;j--)
        printf("%d\n",a[j]);
   
    return 0;
}