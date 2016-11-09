#include <stdio.h>
#include <stdlib.h>

void inputArray(int* a, int n);
void outputArray(int* a, int n);
void bubbleSort(int* a, int n);
void swap(int* a, int* b);

int main(int argc, char* argv[]) {

	printf("input size of array:\n");
	int n;
	while(scanf("%d", &n) == 1) {
		int* a = malloc(sizeof(int) * n);

		inputArray(a,n);

		bubbleSort(a,n);

		outputArray(a,n);

		free(a);

		printf("input size of array:\n");
	}

	return 0;
}

void inputArray(int* a, int n) {
	printf("input %d integers:\n", n);
	int i = 0;
	
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
}

void outputArray(int* a, int n) {
	printf("array after sorting\n");
	int i = 0;
	for(i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

void bubbleSort(int* a, int n) {
	int i = 0;
	int j = 0;
	for(i = 0; i < n - 1; i++) {
		for(j = 0; j < n - i; j++) {
			if(a[j] < a[j - 1]) {
				swap(&a[j], &a[j - 1]);
			}
		}
	}
}

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}