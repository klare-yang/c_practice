#include <stdio.h>

// 函数：利用指针对三个整数进行排序并输出（从大到小）
void sortAndPrint(int *a, int *b, int *c) {
    // 交换指针指向的值，使它们按从大到小排列
    if (*a < *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a < *c) {
        int temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b < *c) {
        int temp = *b;
        *b = *c;
        *c = temp;
    }
    
    // 输出结果，格式为%3d
    printf("%3d %3d %3d\n", *a, *b, *c);
}

int main() {
    int num1, num2, num3;
    
    // 输入三个整数
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // 调用函数，传入指针
    sortAndPrint(&num1, &num2, &num3);
    
    return 0;
}