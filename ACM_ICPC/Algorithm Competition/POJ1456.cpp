#include <stdio.h>
#include <stdlib.h>
struct Job {
int deadline;
int profit;
};
int cmp(const void *a, const void *b) {
return ((struct Job *)b)->profit - ((struct Job *)a)->profit;
}
int main() {
int n;
scanf("%d", &n);
struct Job jobs[10000];  
for (int i = 0; i < n; i++) {  
    scanf("%d %d", &jobs[i].deadline, &jobs[i].profit);  
}  

qsort(jobs, n, sizeof(struct Job), cmp);  

int used[10001] = {0};  
int total = 0;  

for (int i = 0; i < n; i++) {  
    for (int d = jobs[i].deadline; d >= 1; d--) {  
        if (!used[d]) {  
            used[d] = 1;  
            total += jobs[i].profit;  
            break;  
        }  
    }  
}  

printf("%d\n", total);  
return 0;  
}
