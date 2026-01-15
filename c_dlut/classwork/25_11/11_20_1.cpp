#include <stdio.h>

int main(){
    char s[100];
    char *p,*q;

    gets(s);

    for(p=s;*p;p++);
    p--;

    for(q=s;*q;q++){ *q=*p--;
    printf("%c",*q);
  }
}