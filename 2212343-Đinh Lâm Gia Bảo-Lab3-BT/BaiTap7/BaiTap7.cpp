#include<iostream>
#include<conio.h>
using namespace std;
double CanBacHai(double a);

int main()
{
	double  a;
	cout << "nhap so a =";
	cin >> a;
	cout << "gia tri can bac 2 la :" << CanBacHai(a);
	_getch();
	return 0;
}

double CanBacHai(double a)
{
	double xo, xn, e;
	e = 0.0000000000000001;
	if (a == 0)
		xn = 0;
	else
	{
		xn = 1;
		do
		{

			xo = xn;

			xn = (a / xo + xo) / 2.0;

		} while (abs(xn - xo) >= e);
	}

	return xn;
}