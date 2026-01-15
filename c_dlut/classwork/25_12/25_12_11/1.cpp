#include <stdio.h>

int main(){
    struct{
        int sid;
        char name[20];
        int score1,score2,score3;
    }student;

    printf("请输入学号：");
    scanf("%d",&student.sid);

    int c;
    while( (c=getchar( ))!='\n' && c!=EOF);

    printf("请输入姓名：");
    fgets(student.name,sizeof(student.name),stdin);

    printf("请输入三门课程的成绩：");
    scanf("%d",&student.score1);
    scanf("%d",&student.score2);
    scanf("%d",&student.score3);

    float ever=(student.score1+student.score2+student.score3)/3;

    printf("\n学号：%d\n姓名:%s课程1成绩:%d\n课程2成绩:%d\n课程3成绩:%d\n平均分:%.1f\n",
        student.sid,student.name,
        student.score1,student.score2,student.score3,ever);

}