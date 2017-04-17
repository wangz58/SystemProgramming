#include <stdio.h>
#include <math.h>

int main(int argc, char const * argv[])
{
	double power,  num, base, result = 3.0;
	int arg;
	sscanf(argv[1], "%d", &arg);
	if (arg < 0) {
		printf("Invalid input\n");
		return 0;
	}
	for (int i = 1; i <= arg; ++i)
	{
		if (i % 2 == 1) {
			power = 1;
		} else {
			power = -1;
		}
		base = (double) 2 * i * (2 * i + 1) * (2 * i + 2);
		num = (double) 4 / base;
		printf("Num is %.20f\n", num);
		result += power * num;
		printf("New result is %.20f\n", result);
	}
	printf("Our estimate of Pi is %.20f\n", result);
}