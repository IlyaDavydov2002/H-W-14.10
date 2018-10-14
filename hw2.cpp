/*Напишите программу находящую обратный по модулю элемент. Иначе говоря
по числам X и N нужно найти такое число Y, что остаток от деления X*Y на N
равняется единице. В программе гарантируется, что все числа - натуральные*/

#include <iostream>

using namespace std;

bool ready = false;
int a, b, i;
int main()
{
	b = 0;
	i = 0;
	cin >> a;
	while (!ready)                               
	{                                                                          
		b = b + a;                              
		i++;                                    
		if (a == 0) ready = true;                 
	}
	cout << b / i;
	return 0;
}