// Lab_3.1.cpp
// Дорожовець Володимир 
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 0.6 

#include <iostream>
#include <cmath>

using namespace	std;

int main()
{
	double x;
	double y1;
	double y2;
	double Q;
	double W;

	cout << "x = "; cin >> x;
	cout << endl;

	Q = 5 * exp(3 * x);

	// Повна форма.
	if (x <= -1)
	{
		W = 3 + sin(abs(x));
	}
	else
		if (-1 < x && x <= 3)
		{
			W = 2 * exp(x * 1.0 / 4.0) - 1;
		}
		else
			if (x > 3)
			{
				W = 7 - sqrt(2) * x * x * x;
			}
			else
				cout << endl;

	y1 = Q - W;

	cout << "y1 = " << y1 << endl;

	// Скорочена форма.
	if (x <= -1)
	{
		W = 3 + sin(abs(x));
	}
	if (-1 < x && x <= 3)
	{
		W = 2 * exp(x * 1.0 / 4.0) - 1;
	}

	if (x > 3)
	{
		W = 7 - sqrt(2 * x * x * x);
	}

	y2 = Q - W;

	cout << "y2 = " << y2 << endl;

	cin.get();
	return 0;
}
