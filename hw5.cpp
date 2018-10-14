/*Ќапишите функции min, max, avg, med, процедуру swap принимающие в себ€
три вещественных аргумента и программу с примером из использовани€. min -
находит минимальное из трех значений, max - максимальное, avg - среднее
арифметическое, med - медианное (гуглим, что это такое). swap - переставл€ет
значени€ по кругу ( первое во второе, второе в третье, третье в первое)*/



#include <iostream>
using namespace std;

float max(float a, float b, float c) {
	float temp = a > b ? a : b;

	return temp > c ? temp : c;
}

float min(float a, float b, float c) {
	float temp = a < b ? a : b;

	return temp < c ? temp : c;
}

float avg(float a, float b, float c) {
	return (a + b + c) / 3;
}

float med(float a, float b, float c) {
	if (a > b && a < c || a < b && a > c) {
		return a;
	}
	else if (b > a && b < c || b < a && b > c) {
		return b;
	}
	return c;
}

void swap(float & a, float & b, float & c) {
	float temp_a = a;
	a = c;
	float temp_b = b;
	b = temp_a;
	c = temp_b;
}

int main() {
	cout << min(1.4, 4, 5) << endl
		<< max(3, 4.4, 4.4) << endl
		<< med(3.4, 4, 6) << endl;

	float a = 1, b = 2, c = 4.5;
	swap(a, b, c);
	cout << a << ' ' << b << ' ' << c << endl;
	return 0;
}