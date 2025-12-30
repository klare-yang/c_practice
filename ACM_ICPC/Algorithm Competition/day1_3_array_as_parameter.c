#include <stdio.h>

void f(int a[]){
    a[0] = 100;
}

int main(){
    int a[3] = {5,2,3};
    f(a);
    printf("%d",a[0]);
}