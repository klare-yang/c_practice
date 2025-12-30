#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}

int n, m;
int x[100000];
int check(int d) {
int cnt = 1;
int last = x[0];
for (int i = 1; i < n; i++) {
if (x[i] - last >= d) {
cnt++;
last = x[i];
}
}
return cnt >= m;
}
int main() {
scanf("%d %d", &n, &m);
for (int i = 0; i < n; i++) scanf("%d", &x[i]);
qsort(x, n, sizeof(int), cmp);  

int l = 0, r = x[n - 1] - x[0];  
int ans = 0;  

while (l <= r) {  
    int mid = l + (r - l) / 2;  
    if (check(mid)) {  
        ans = mid;  
        l = mid + 1;  
    } else {  
        r = mid - 1;  
    }  
}  

printf("%d\n", ans);  
return 0;  
}