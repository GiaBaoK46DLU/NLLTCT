#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float x, y, z;
	int n;
	cout << "Nhap so x: ";
	cin >> x;
	cout << "Nhap so y: ";
	cin >> y;
	cout << "Nhap so n: ";
	cin >> n;
	z = pow(x, n) + pow(y, n);
	cout << "Gia tri bieu thuc z la: " << z;
}