#include <stdio.h>
 int main()
 {
    int a[10];
    int max=0,t,j=0;

    for (int i=0;i<6;i++)
        scanf("%d",&a[i]);

    for (int i=0;i<6;i++)
        if(max<a[i])
            max = a[i];
    
    for (int i=0;i<6;i++)
        if(max==a[i])
            j=i;

    t = a[j];
    a[j] = a[5];
    a[5] = max;

    for(int i=0;i<6;i++)
        printf("%d\n",a[i]);

 }