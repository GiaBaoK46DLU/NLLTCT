#include<iostream>
using namespace std;

double TinhKhoangCach(double xa, double ya, double xb, double yb);

int main()
{
	double xa, ya, xb, yb, d;
	cout << "Nhap toa do x cua diem A: ";
	cin >> xa;
	cout << "Nhap toa do y cua diem A: ";
	cin >> ya;
	cout << "Nhap toa do x cua diem B: ";
	cin >> xb;
	cout << "Nhap toa do y cua diem B: ";
	cin >> yb;
	d = TinhKhoangCach(xa, ya, xb, yb);
	cout << "Khoang cach d giua hai diem A va B la: " << d << endl;
	return 0;
}
double TinhKhoangCach(double xa, double ya, double xb, double yb)
{
	double a, b, d;
	a = xb - xa;
	b = yb - ya;
	d = sqrt((a * a) + (b * b));
	return d;
}