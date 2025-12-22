#include <stdio.h>

void f(int *a){
    a = 10;
}

int main(){
    int a = 5 , *p = &a;
    f(p);
    printf("%d",a);
}