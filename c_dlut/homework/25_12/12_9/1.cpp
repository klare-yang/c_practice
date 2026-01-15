#include <stdio.h>

int main(){
    int a[100],*max,*min;
    for(int i=0;i=3;i++){
        scanf("%d",&a[i]);
        if(a[i]>=*max)
            max=&a[i];
        if(a[i]<=*min)
            min=&a[i];
    }
    
}