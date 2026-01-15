#include <stdio.h>

void exchange(int a[], int n, int **pmax, int **pmin)
{
    *pmax = *pmin = a;

    for(int i = 1; i < n; i++) {
        if(a[i] > **pmax)
            *pmax = &a[i];
        if(a[i] < **pmin)
            *pmin = &a[i];
    }
}

int main()
{
    int a[100];
    int n = 5;
    int *pmax, *pmin;

    printf("请输入 5 个整数：\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    exchange(a, n, &pmax, &pmin);

    printf("最大值：%d\n", *pmax);
    printf("最小值：%d\n", *pmin);

    return 0;
}
