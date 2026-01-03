#include <stdio.h>

int main(){
    int num,rev=0;

    scanf("%d",&num);
    int tmp = num;
    
    while(tmp != 0){
        rev =rev * 10 + tmp % 10;
        tmp /= 10;
    }

    if(rev == num){
        printf("yas");
    }
    else
        printf("no");

}