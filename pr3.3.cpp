// Lab_03_3.cpp
// < ������� ���'� >
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 10
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; //������� ��������
	double y; //��������� ���������� ������
	double R; //������� ��������
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	//������������ � ����� ����

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