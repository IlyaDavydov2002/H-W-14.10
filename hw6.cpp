*// Напишите функцию sort упорядывающую массив целых чисел и программу спримером её использования.В коде запрещается использовать обращения кмассиву по индексу(Arr[i]), т.е.нужно использовать указательную арифметику.Эффективность в данной программе не приоритетна.Количество аргументовфункции не должно превышать 2/* 


#include <iostream>

using namespace std;

int main()
{
	int n;
	int m;
	cin >> n;
	int *arr = new int[n];

	for (int i = 0; i < n; i++) cin >> *(arr + i);

	for (int i = 0; i < n - 1; i++)
	{
		for (int k = 1; k < n; k++)
		{
			if (*(arr + i) < *(arr + k))
			{
				m = *(arr + i);
				*(arr + i) = *(arr + k);
				*(arr + k) = m;
			}
		}
	}
	
	for (int i = 0; i < n; i++) cout << *(arr + i) << " ";
	system("pause");
	return 0;
}