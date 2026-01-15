#include <stdio.h>

int sum(int a[], int n)
{
    int s = 0;
    for(int i = 0; i < n; i++)
        s += a[i];
    return s;
}

double average(int a[], int n)
{
    return (double)sum(a, n) / n;
}

void sort(int a[], int n)
{
    int i, j, t;
    for(i = 0; i < n - 1; i++)
        for(j = i + 1; j < n; j++)
            if(a[j] > a[i]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
}

int main()
{
    int a[5];
    for(int i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("总成绩：%d\n", sum(a, 5));
    printf("平均成绩：%.2f\n", average(a, 5));

    sort(a, 5);

    printf("成绩从高到低：");
    for(int i = 0; i < 5; i++)
        printf("%d ", a[i]);

    return 0;
}
