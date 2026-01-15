#include <stdio.h>

int main(){
    int array[10],*p,max,min;
    scanf("%d",&array[0]);
    max=min=array[0];

    for(p=array; p<array+9; p++){
        scanf("%d",p);
        if(max <= *p)
            max = *p;
        if(min >= *p)
            min = *p;
    }

    printf("max=%d,min=%d",max,min);
}