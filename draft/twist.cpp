#include <stdio.h>

int main() {

	int num = 12321, rev = 0;
	int a = num;

	while (num != 0) {
		int temp = num % 10;
		num /= 10;
		rev = rev * 10 + temp;
	}

	if (a == rev) {
		printf("yes\n");
	}
	else {
		printf("no\n");
	}

	return 0;
}