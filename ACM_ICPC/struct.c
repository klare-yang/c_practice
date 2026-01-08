#include <stdio.h>

int main(){
    struct student{
        int num;
        int price;
    }stu[3];

    struct student *p;
    p=stu;

    for(int i=0;i<3;i++){
        scanf("%d %d",&p->num,&p->price);
        printf("学生的学号是：%d,%d\n",p->num,p->price);
    }

}