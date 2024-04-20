#include<iostream>
using namespace std;
#define PI 3.1415926

double TinhTheTichHinhTruTron(float R, float h);
double TinhDienTichXungQuanh(float R, float h);
double TinhDienTichToanPhan(float R, float h);

int main()
{
	double R, h, V, Sxq, Stp;
	cout << "Nhap ban kinh R: ";
	cin >> R;
	cout << "Nhap chieu cao h: ";
	cin >> h;
	V = TinhTheTichHinhTruTron(R, h);
	cout << "The tich hinh tru la: " << V << endl;
	Sxq = TinhDienTichXungQuanh(R, h);
	cout << "Dien tich xung quanh la: " << Sxq << endl;
	Stp = TinhDienTichToanPhan(R, h);
	cout << "Dien tich toan phan: " << Stp << endl;
	return 0;
}
double TinhTheTichHinhTruTron(float R, float h)
{
	double V;
	V = 4 * PI * R * R * h;
	return V;
}
double TinhDienTichXungQuanh(float R, float h)
{
	double Sxq;
	Sxq = 2 * PI * R * h;
	return Sxq;
}
double TinhDienTichToanPhan(float R, float h)
{
	double Stp;
	Stp = 2 * PI * R * h + 2 * PI * R * R;
	return Stp;
}