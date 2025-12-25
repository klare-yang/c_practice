#include <stdio.h>

struct Node { int x; };

void f_val(struct Node n) {   // 传值：拷贝
    n.x = 999;
}

void f_ptr(struct Node *p) {  // 传指针：改原对象
    p->x = 888;
    // 等价写法：(*p).x = 888;
}

int main(void) {
    struct Node a;
    a.x = 1;

    printf("before: a.x=%d\n", a.x);

    f_val(a);
    printf("after f_val: a.x=%d\n", a.x);

    f_ptr(&a);
    printf("after f_ptr: a.x=%d\n", a.x);

    return 0;
}
