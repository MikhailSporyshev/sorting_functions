#include <iostream>
#include <vector>


void inputVector(std::vector<int>& A);
void outputVector(std::vector<int>& A);
void Insertion_Sort(std::vector<int>& A);

int main(int argc, char* argv[]) {
	int	n;
	std::cout << "input size of array:" << std::endl;
	while(std::cin >> n) {
		std::vector<int> A(n);
		
		inputVector(A);		
		Insertion_Sort(A);
		outputVector(A);

		std::cout << "input size of array:" << std::endl;
	}
	return 0;
}

void Insertion_Sort(std::vector<int>& A) {
	for(int i = 1; i < A.size(); i++) {
		int key = A[i];
		int j = i - 1;
		while(j >= 0 && A[j] > key) {
			A[j + 1] = A[j];
			j--; 
		}
		A[j + 1] = key;
	}
}

void inputVector(std::vector<int>& a) {
	std::cout << "input " << a.size() << " integers:" << std::endl;
	for(int i = 0; i < a.size(); i++) {
		std::cin >> a[i];
	}
}

void outputVector(std::vector<int>& a) {
	std::cout << "vector after sorting:" << std::endl;
	for(int i = 0; i < a.size(); i++) {
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
}