#include <stdio.h>

int main(){
    int a[] = {1,2,3,4,7,8,9},*p = a;
    printf("%d\n",a[2]);
    printf("%d\n",*a);
    printf("%d\n",*(p+2));
    printf("%d\n",*p);
    printf("%d\n",*(a+2));
    printf("%d\n",*(p));
}