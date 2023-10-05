// Lab_03_1.cpp
// Богаєць Анна
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 3

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; 
	double y; 
	double A; 
	double B; 
	cout << "x = "; cin >> x;
	
	A = (2/x)+(abs(x));
	// спосіб 1: розгалуження в скороченій формі
	if (x < 0)
		B = 1+(4*x*x);
	if (0 <= x && x <= 2)
		B = (exp(1)+ abs(x))* (exp(1) + abs(x));
	if (x > 2)
		B = 5*sin(x*x+1);
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгалуження в повній формі
	if (x < 0)
		B = 1 + (4*x*x);
	else
		if (x > 2)
			B = 5 * sin(x*x+1);
		else
			B = (exp(1) + abs(x)) * (exp(1) + abs(x));
	y = A + B;
	cout << "2) y = " << y << endl;
	
	cin.get();
	return 0;
}
