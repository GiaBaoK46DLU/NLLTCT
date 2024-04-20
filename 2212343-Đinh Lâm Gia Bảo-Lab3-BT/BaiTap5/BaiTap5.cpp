#include <iostream>
#include<conio.h>
#include <math.h>

using namespace std;
double TinhTong(double n);

int main()
{
	double n, sum_a, sum_b;
	cout << "Nhap n = "; 
	cin >> n;
	TinhTong(n);
	_getch();
	return 0;

}
double TinhTong(double n)
{
	double sum_a = 0;
	for (double i = 1; i <= n; i++)
	{

		sum_a = sum_a + 1 / i;
	}

	double sum_b = 0, i = 1;
	i = 0;
	do
	{
		i++;
		sum_b = sum_b + (i + 1) / (i * i);

	} while (i < n);
	cout << "a) Hn = " << sum_a;
	cout << "\nb) Sn = " << sum_b;
	return sum_a;
	return sum_b;

}