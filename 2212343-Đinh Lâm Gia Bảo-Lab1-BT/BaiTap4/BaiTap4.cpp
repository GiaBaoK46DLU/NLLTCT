#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a, b, c;
	float p, chuVi, dienTich;
	cout << "Canh a la: ";
	cin >> a;
	cout << "Canh b la: ";
	cin >> b;
	cout << "Canh c la: ";
	cin >> c;
	chuVi = a + b + c;
	p = chuVi / 2.0;
	dienTich = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Chu vi tam giac la: " << chuVi << endl;
	cout << "Dien tich tam giac la: " << dienTich << endl;

	return 0;

}