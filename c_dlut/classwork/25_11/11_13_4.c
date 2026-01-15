#include <stdio.h>
#include <stdio.h>

int findTopGroup(int scores[][5], int g, int k, int result[]) {
    int maxSum = 0;    
    int topGroup = 0;

    for (int i = 0; i < g; i++) { 
        int sum = 0;
        for (int j = 0; j < k; j++) { 
            sum += scores[i][j];
        }
        if (i == 0 || sum > maxSum) { 
            maxSum = sum;
            topGroup = i;
        }
    }

    result[0] = topGroup; 
    return maxSum;        
}

int main() {
    int m, n;
    printf("请输入小组数m和测试次数n（n<=5）：");
    scanf("%d %d", &m, &n);

    int scores[100][5];
    printf("请输入每个小组的得分（按行输入，每组%d个分数）：\n", n);

    for (int i = 0; i < m; i++) {
        printf("第%d组：", i + 1);
        for (int j = 0; j < n; j++) {
            scanf("%d", &scores[i][j]);
        }
    }

    int result[1];
    int topScore = findTopGroup(scores, m, n, result);

    printf("总分最高的是第%d组，总分为%d。\n", result[0] + 1, topScore);

    return 0;
}
