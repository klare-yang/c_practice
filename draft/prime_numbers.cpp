#include <stdio.h>

int main() {
    
	int count = 0,max;
	printf("请输入一个整数：");
	scanf("%d", &max);

	for (int i = 2; i <= max; i++) {
		int Count = 0;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				Count++;
                break;
			}
		}
		if (Count == 0) {
			count++;
		}
	}
	printf("从1到%d共有%d个质数。\n", max, count);
	return 0;
}