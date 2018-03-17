#include <stdio.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void) {
	int a = 200;
	int b = 500;
	//Before swap
	printf("%d %d\n", a, b);
	swap(&a, &b);
	//After swap
	printf("%d %d\n", a, b);
	return 0;
}
