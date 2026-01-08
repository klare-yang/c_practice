#include <stdio.h>
#include <stdlib.h>

struct Node {
    int x;
};

int cmp_node_by_x(const void *a, const void *b){
    int x = ((const struct Node*)a)->x;
    int y = ((const struct Node*)b)->x;
    return (x > y) - (x < y);
}

int main(void){
    int n;
    scanf("%d", &n);

    struct Node a[10000];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i].x);
    }

    qsort(a, n, sizeof(struct Node), cmp_node_by_x);

    for(int i = 0; i < n; i++){
        printf("%d ", a[i].x);
    }
    return 0;
}
