#include <stdio.h>

int main(){
        goto L;
    int x = 10;   // C90 中可能导致跳过初始化
    L:
        ;
    printf("%d",x);
}