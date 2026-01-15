#include <stdio.h>
void exchange(int a[],int *p,int *q){
    int *c;
    p=a;
    q=a;
    for(c=a;*c;c++){
        if(*c>=*p)
            *p=*c;
        if(*c<=*q)
            *q=*c;
    }
}

int main(){
    int a[100],*p,*q;
    fgets(a,100,stdin);
    exchange(a,*p,*q);
    printf("%d",*p);
    printf("%d",*q);
}