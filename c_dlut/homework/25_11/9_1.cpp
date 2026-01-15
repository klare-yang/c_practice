#include <stdio.h>

float e(int n){
    float a=1,b=1;
    for(int i=1;i<=n;i++){
        a*=i;
        b+=1/a;
    }
    return b;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("e=%.4f",e(n));
}