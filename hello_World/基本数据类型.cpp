#include <stdio.h>

int x, y;

int add() {

	extern int x;
	extern int y;

	x = 1;
	y = 2;

	return x + y;
}

void main2();
int main3() {
	int result;
	result = add();

	void main2();

	printf("result = %d", result);
	return 2;
}