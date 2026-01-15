#include <stdio.h>

int main(){
    int a[10],*p;

    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }

    for(p=a+9;p>=a;p--){
        printf("%2d",*p);
    }
}
