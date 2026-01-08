/*
 * Name: bubble_sort_basic
 * Purpose:
 *   对整数数组进行升序排序（冒泡排序）
 *
 * Core Idea:
 *   每一轮比较相邻元素，
 *   把当前最大的数“冒”到数组右端
 *
 * Typical Use:
 *   - 小规模排序
 *   - 教学 / 手写排序
 *   - OJ 明确要求冒泡
 */

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int a[10000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // 冒泡排序
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (i) putchar(' ');
        printf("%d", a[i]);
    }
    putchar('\n');

    return 0;
}
