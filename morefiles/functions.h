#pragma 
#include <iostream>


int sum(int a, int b);

void fillarr(int arr[], int length, int x, int y);

template <typename T> void showarr(T arr, int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

