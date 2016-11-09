#include <stdio.h>
#include <stdlib.h>

void insertionSort(int n, int* A);
void inputArray(int n, int* A);
void outputArray(int n, int* A);

int main(int argc, char* argv[]) {
	int	n;
	printf("input size of array:\n");
	while(scanf("%d", &n) == 1) {
		int* A = malloc(sizeof(int) * n);
		
		inputArray(n, A);				
		insertionSort(n, A);
		outputArray(n, A);

		free(A);		
		printf("input size of array:\n");
	}
	return 0;
}

void inputArray(int n, int* A) {
	printf("input %d integers:\n", n);
	int i = 0;
	
	for(i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
}

void outputArray(int n, int* A) {
	printf("array after sorting\n");
	int i = 0;
	for(i = 0; i < n; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
}

void insertionSort(int n, int* A) {
	int j = 1;
	for(j = 1; j < n; j++) {
		int key = A[j];
		int i = j - 1;
		while(i >= 0 && A[i] > key) {
			A[i + 1] = A[i];
			i -= 1;
		}
		A[i + 1] = key;
	}
}