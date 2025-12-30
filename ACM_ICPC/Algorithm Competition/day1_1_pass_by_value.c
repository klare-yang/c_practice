#include <stdio.h>

void f(int a){
    a = 10;
}

int main(){
    int a=5;
    f(a);
    printf("%d",a);
}