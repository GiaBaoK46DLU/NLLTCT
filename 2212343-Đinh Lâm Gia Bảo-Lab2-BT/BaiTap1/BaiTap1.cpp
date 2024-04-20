#include<iostream>
#include<math.h>
using namespace std;
#define PI 3.1415926

double TinhChuViHinhTron(double r);
double TinhDienTichHinhTron(double r);
int main()
{
	double r, ChuVi, DienTich;
	cout << "Nhap gia tri cua r: ";
	cin >> r;
    ChuVi = TinhChuViHinhTron(r);
	cout << "Chu Vi Hinh Tron la: " << ChuVi << endl;
	DienTich = TinhDienTichHinhTron(r);
	cout << "Dien Tich Hinh Tron la: " << DienTich;
	
	return 0;
}
double TinhChuViHinhTron(double r)
{
	double ChuVi;
	ChuVi = 2 * PI * r;
	return ChuVi;
}
double TinhDienTichHinhTron(double r)
{
	double DienTich;
	DienTich = PI * r * r;
	return DienTich;
}