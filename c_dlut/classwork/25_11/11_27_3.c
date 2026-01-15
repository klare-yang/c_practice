#include <stdio.h>

int main(){
    char s[100],*p=s;
    int num=0;

    while(scanf("%c",p) != EOF){
        num++;
        p++;
    }
    *p = '\0';

    for(int i=0;i<num;i++){
        if(s[i]<=90 && s[i]>=65)
            s[i]+=32;
    }

    int x=0;
    for(int i=0;i<num;i++){
        if(s[i]<= '9' && s[i]>= '0')
            x++;
    }

    printf("字符串长度：%d\n", num);
    printf("小写字符串：%s\n", s);
    printf("数字字符个数：%d\n", x);

}