/*
 * Name: binary_search_max_true
 * Purpose:
 *   在整数区间 [l, r] 内，找到最大的 mid，
 *   使得 check(mid) == true。
 *
 * Core Idea:
 *   - 把 mid 当作“候选答案”
 *   - check(mid) 判断该答案是否可行
 *   - true -> 尝试更大的答案
 *   - false -> 缩小上界
 *
 * Typical Problems:
 *   - 最大最小距离（POJ2456）
 *   - 最大可行值
 *   - 二分答案类 OJ 题
 */

#include <stdio.h>

/* 示例 check：<=10 为合法 */
int check(int mid) {
    return mid <= 10;
}

/* 二分主流程：找最大合法值 */
int binary_search_max_true(int l, int r) {
    int ans = -1;

    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (check(mid)) {
            ans = mid;
            l = mid + 1;   // 继续向右尝试
        } else {
            r = mid - 1;   // 缩小上界
        }
    }

    return ans;
}

/* 测试入口 */
int main(void) {
    int result = binary_search_max_true(0, 20);
    printf("%d\n", result);  // 期望输出 10
    return 0;
}
