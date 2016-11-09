#include <iostream>
#include <vector>
#include <algorithm>

void inputVector(std::vector<int>& a);
void outputVector(std::vector<int>& a);
void bubbleSort(std::vector<int>& a);

int main(int argc, char* argv[]) {

	std::cout << "input number of integers:" << std::endl;
	int n = 0;
	while(std::cin >> n) {
		std::vector<int> a(n);

		inputVector(a);

		bubbleSort(a);

		outputVector(a);

		std::cout << "input number of integers:" << std::endl;
	}

	return 0;
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
void bubbleSort(std::vector<int>& a) {
	for(int i = 0; i < a.size() - 1; i++) {
		for(int j = 0; j < a.size() - i; j++) {
			if(a[j] < a[j - 1]) {
				std::swap(a[j],a[j - 1]);
			}
		}
	}
}
