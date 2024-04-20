#include <iostream>
#include <math.h>
using namespace std;

double TinhDoCao(double phi, double delta, double h);
double TinhPhuongVi(double phi, double delta, double h, double altitude);

int main()
{
	double phi, delta, h, altitude, z;
	cout << "Nhap phi: ";
	cin >> phi;
	cout << "Nhap delta: ";
	cin >> delta;
	cout << "Nhap goc mui gio h: ";
	cin >> h;
	altitude = TinhDoCao(phi, delta, h);
	cout << "Gia tri cua Do Cao la: " << altitude << endl;
	z = TinhPhuongVi(phi, delta, h, altitude);
	cout << "Gia tri cua Phuong Vi la: " << z << endl;
	return 0;
}

double TinhDoCao(double phi, double delta, double h)
{
	double altitude;
	altitude = asin(sin(phi) * sin(delta) + cos(phi) * cos(delta) * cos(h));
	return altitude;
}
double TinhPhuongVi(double phi, double delta, double h, double altitude)
{
	double azimuth;
	azimuth = acos((cos(phi) * sin(delta) - sin(phi) * cos(delta) * cos(h)) / cos(altitude));
	return azimuth;
}