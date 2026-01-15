#include <stdio.h>

void inputIntArray(int *p, int n);
int findArrayMax(int *p, int n);

int main() {
    int arr[10];
    int maxValue;

    inputIntArray(arr, 10);
    maxValue = findArrayMax(arr, 10);

    printf("数组中的最大值为：%d\n", maxValue);

    return 0;
}

void inputIntArray(int *p, int n) {
    printf("请输入10个整数:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", p);
        p++;
    }
}

int findArrayMax(int *p, int n) {
    int max = *p;
    p++;

    for (int i = 1; i < n; i++) {
        if (*p > max) {
            max = *p;
        }
        p++;
    }

    return max;
}