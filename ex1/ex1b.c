#include <stdio.h>
#include <stdint.h>

void insertionSort(int64_t a[], int64_t b[], uint32_t length);

void CopyAndSort(int64_t a[], int64_t b[], uint32_t length);

int main(int argc, char const *argv[]) {
	// initialization
	int64_t a[5] = {2, 5, 4, 6, 1};
	int64_t b[5] = {0};
	uint32_t length = 5;

	CopyAndSort(a, b, length);
	return 0;
}

void CopyAndSort(int64_t a[], int64_t b[], uint32_t length) {
	
	b[0] = a[0];
	insertionSort(a, b, length);

	printf("%d", b[0]);
	for (int i = 1; i < length; i++) {
		printf(" %d", b[i]);
	}
	printf("\n");
}

void insertionSort(int64_t a[], int64_t b[], uint32_t length) {

	for (int i = 1; i < length; i++) {
		int j = i - 1;
		int current = a[i];
		for (j = i - 1; j >= 0; j--) {
			if (b[j] > current) {
				b[j + 1] = b[j];
				printf("%d %d\n", j + 1, b[j]);

			} else {
				break;
			}
		}
		printf("%d %d\n", j + 1, current);

		b[j + 1] = current;
	}
}

// void scanValue(int a[], char const *argv);

// int main(int argc, char const *argv[])
// {
// 	if (argc != 4) {
// 		printf("Please put exactly three arguments\n");
// 		return 0;
// 	}

// 	int length;
// 	sscanf(argv[argc - 1], "%d", &length);

// 	int a[length], b[length];

// 	scanValue(a, argv[1], length);
// 	scanValue(b, argv[2], length);

// 	int combined[length * 2] = {0};
// 	insertionSort(a, length, b, length, combined, length * 2);

// 	printf("%d", combined[0]);
// 	for (int i = 1; i < length * 2; i++) {
// 		printf(" %d", combined[i]);
// 	}
// 	return 0;
// }

// void scanValue(int arr[], char const * str, int length) {

// 	for (int i = 0; i < length; i++) {
// 		sscanf(str[i], "%d", &arr[i]);
// 	}
// }