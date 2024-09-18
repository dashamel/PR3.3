// Lab_03_3.cpp
// < Мельник Дар'я >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 10
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; //вхідний аргумент
	double y; //результат обчислення виразу
	double R; //вхідний параметр
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	//розгалуження в повній формі

	if (x <= (-8 - R))
		y = R;
	else
		if ((-8 - R) <= x <= -8)
			y = -(sqrt(R * R - (x + 8) * (x + 8)));
		else
			if (-8 <= x <= (-8 + R))
				y = -(sqrt(R * R - (x + 8) * (x + 8)));
			else
				if ((-8 + R) <= x <= -4)
					y = R;
				else
					if (-4 <= x <= 2)
						y = ((-5 + R) / 6) * x;
					else
						if (2 <= x)
							y = x - 3;
	cout << endl;
	cout << "y = " << y << endl;

	cin.get();
	return 0;
}