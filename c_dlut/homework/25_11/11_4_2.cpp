#include <stdio.h>
int main()
{
    int a[10];
    int MAX=0,SEC=01 ;

    for (int i = 0; i <5; i++)
        scanf("%d",&a[i]);

    for (int i = 0; i <5; i++)
        if(MAX<a[i])
            MAX=a[i];

    for (int i = 0; i <5; i++)
        if(SEC<a[i] && a[i] != MAX)
            SEC = a[i];

    printf("次最大值=%d",SEC);

    return 0;
}