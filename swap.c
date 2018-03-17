#include <stdio.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void) {
<<<<<<< HEAD
	int a = 200;
=======
	int a = 100;
>>>>>>> 8586e29fb69fa420b21087957f2b965422516585
	int b = 300;
	//Before swap
	printf("%d %d\n", a, b);
	swap(&a, &b);
	//After swap
	printf("%d %d\n", a, b);
	return 0;
}
