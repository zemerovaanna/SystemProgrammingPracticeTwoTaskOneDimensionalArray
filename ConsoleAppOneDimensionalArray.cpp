#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int array[10] = { 1, 3, 5, 7, 9, 4, 2, 5, 6, 8 };
	int yarra[sizeof(array) / sizeof(array[0])] = {};
	int j = 0;

	cout << "Обычный массив:" << endl;

	for (int i = sizeof(array) / sizeof(array[0]) - 1; i >= 0; --i)
	{
		cout << "Элемент с индексом " << j << " = " << array[j] << endl;
		yarra[j] = array[i];
		j++;
	}

	cout << "\nПеревёрнутый массив:" << endl;

	for (int i = 0; i < sizeof(yarra) / sizeof(yarra[0]); ++i)
	{
		cout << "Элемент с индексом " << i << " = " << yarra[i] << endl;
	}

	return 0;
}