#include <stdio.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void) {
	int a = 100;
	int b = 300;
	//Before swap
	printf("%d %d\n", a, b);
	swap(&a, &b);
	//After swap
	printf("%d %d\n", a, b);
	return 0;
}
