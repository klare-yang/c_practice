#include <stdio.h>

int main(){
    int a[100],*p=a;
    for(int i=0;i<10;i++){
        scanf("%d",p);
        p++;
    }
    p--;
    for(int i=0;i<10;i++){
        printf("%d ",*p);
        p--;
    }
}