#include <stdio.h>

int main(){
    union u{
        char *name;
        int age;
        int income;
    }u;

    u.age = 24;

    printf("%d",u.income);

}