#include <stdio.h>

int main()
{
    int i=0,j=0;
    char s1[100],s2[100];

    scanf("%s",s1);
    scanf("%s",s2);

    while(s1[i] != '\0')
    i++;

    while(s2[j] != '\0'){
        s1[i+j]=s2[j];
        s1[i+j+1]=s2[j+1];
    }

    printf("%s",s1);
}