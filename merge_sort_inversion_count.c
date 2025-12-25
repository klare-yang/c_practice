#include <stdio.h>
#include <stdlib.h>

long long merge_count(int *a, int *tmp, int l, int r){
    if (l >= r) return 0;

    int mid = l + (r - l) / 2;
    long long cnt = 0;

    cnt += merge_count(a, tmp, l, mid);
    cnt += merge_count(a, tmp, mid + 1, r);

    int i = l, j = mid + 1, k = l;

    while (i <= mid && j <= r) {
        if (a[i] <= a[j]) {
            tmp[k++] = a[i++];
        } else {
            tmp[k++] = a[j++];
            cnt += (long long)(mid - i + 1);  // ★ 核心
        }
    }

    while (i <= mid) tmp[k++] = a[i++];
    while (j <= r)   tmp[k++] = a[j++];

    for (i = l; i <= r; i++) {
        a[i] = tmp[i];
    }

    return cnt;
}

int main(void){
    int n;
    scanf("%d", &n);

    int *a = (int*)malloc(sizeof(int) * n);
    int *tmp = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    long long ans = merge_count(a, tmp, 0, n - 1);
    printf("%lld\n", ans);

    free(tmp);
    free(a);
    return 0;
}
