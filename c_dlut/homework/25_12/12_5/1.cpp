#include <stdio.h>

int main(){
    char s[100],*p;
    int i=0;
    p=s;

    fgets(s,100,stdin);

    while(*p != 0){
        p++;
        i++;
    }
    
    printf("Length of the string is %d\n",i);

}