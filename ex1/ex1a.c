#include <stdio.h>

void testArr(int a[]);

void testDouble(double b);

int main(int argc, char const *argv[]) {
	int a[2] = {2, 3};
	testArr(a);
	double b = 4.1;
	testDouble(b);

	if (b != 4.1) {
		printf("double: pass-by-reference\n");
	} else {
		printf("double: pass-by-value\n");
	}
	
	if (a[0] != 2) {
		printf("array of ints: pass-by-reference\n");
	} else {
		printf("array of ints: pass-by-value\n");
	}

}

void testArr(int a[]) {
	a[0] = -a[0];
}

void testDouble(double b) {
	b = - b;
}
