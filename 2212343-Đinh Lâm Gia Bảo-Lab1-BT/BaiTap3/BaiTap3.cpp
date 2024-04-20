#include<iostream>
using namespace std;

int main()
{
	int x, y;
	float a, b, c, d, e;
	cout << "Nhap so x: ";
	cin >> x;
	cout << "Nhap so y: ";
	cin >> y;
	a = x + y;
	cout << "Ket qua cua a la: " << a << endl;
	b = x - y;
	cout << "Ket qua cua b la: " << b << endl;
	c = x * y;
	cout << "Ket qua cua c la: " << c << endl;
	d = x / y;
	cout << "Ket qua cua d la: " << d << endl;
	e = x % y;
	cout << "Ket qua cua e la: " << e << endl;

	return 0;
}