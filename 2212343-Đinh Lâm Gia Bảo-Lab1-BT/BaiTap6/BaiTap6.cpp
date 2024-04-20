#include<iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	x++;
	cout << "Gia tri lan mot cua x la: " << x << endl;
	x--;
	cout << "Gia tri lan hai cua x la: " << x << endl;
	++x;
	cout << "Gia tri lan ba cua x la: " << x << endl;
	--x;
	cout << "Gia tri lan bon cua x la: " << x << endl;
	x = x / y;
	cout << "Gia tri lan nam cua x la: " << x << endl;
	y = x % y;
	cout << "Gia tri cua y la: " << y << endl;
	x *= y;
	cout << "Gia tri lan sau cua x la: " << x << endl;

	return 0;

}