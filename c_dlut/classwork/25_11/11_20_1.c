#include <stdio.h>

int main(){
    char s[100],*p;
    printf("请输入字符串：");
    scanf("%s",s);

    for(p=s;*p;p++);
    p--;

    printf("逆序打印结果：");
    while(p>=s){
    printf("%c",*p--);
    }

    return 0;
}