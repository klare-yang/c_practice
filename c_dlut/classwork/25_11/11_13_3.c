#include <stdio.h>

void calculateTotalScores(int scores[][11], int m, int n, int totals[]) {
    for (int i = 0; i < m; i++) { 
        totals[i] = 0;
        printf("请输入第%d名学生的%d门成绩：", i + 1, n);
        for (int j = 0; j < n; j++) {
            scanf("%d", &scores[i][j]);
            totals[i] += scores[i][j];
        }
    }
}

int main() {
    int m, n;
    printf("请输入学生人数和科目数：");
    scanf("%d %d", &m, &n);

    int scores[100][11];
    int totals[100];

    calculateTotalScores(scores, m, n, totals);

    printf("\n各学生总分如下：\n");
    for (int i = 0; i < m; i++) {
        printf("第%d名学生的总分：%d\n", i + 1, totals[i]);
    }

    return 0;
}
