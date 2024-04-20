#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float a, b, h, p, canhBen, chuVi, dienTich;
	cout << "Nhap so a: ";
	cin >> a;
	cout << "Nhap so b: ";
	cin >> b;
	cout << "Nhap so h: ";
	cin >> h;
	p = (a - b) / 2;
	canhBen = sqrt(p * p + h * h);
	chuVi = a + b + 2 * canhBen;
	dienTich = ((a + b) * h) / 2;
	cout << "Chu vi hinh thang can la: " << chuVi << endl;
	cout << "Dien tich hinh thang can la: " << dienTich << endl;

	return 0;
}