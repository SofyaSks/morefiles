#include <iostream>
#include "functions.h"
#include "structures.h"
#include "data.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int n, m;

	// Работа с functions.h
	/*cout << "Введите два числа: ";
	cin >> n >> m;
	cout << n << " + " << m << " = " << sum(n, m) << endl;

	int arr[10];
	fillarr(arr, 10, 10, 101);
	cout << "Изначальный массив:\n";
	showarr(arr, 10);*/ 

	// Работа с structures.h
	/*person Tom = {"Tom Smith", {1, 2, 2003}, "director", 200000};
	showobj(Tom);*/

	x = 10;
	cout << "x = " << x << endl;
	y = 15;
	cout << "y = " << y << endl;

	fillmx();

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			cout << mx[i][j] << "\t";
		cout << endl;
	}

	return 0;
}