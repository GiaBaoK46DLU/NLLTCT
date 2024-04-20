#include<iostream>
using namespace std;
#define PI 3.1415926

double TinhTheTichKhoiCau(double R);
double TinhDienTichMatCau(double R);
int main()
{
	double R, V, S;
	cout << "Ban kinh R la: ";
	cin >> R;
	V = TinhTheTichKhoiCau(R);
	cout << "The tich khoi cau la: " << V << endl;
	S = TinhDienTichMatCau(R);
    cout << "Dien tich mat cau la: " << S << endl;
	return 0;
}
double TinhTheTichKhoiCau(double R)
{
	double V;
	V = 4 / 3 * PI * R * R * R;
	return V;
}
double TinhDienTichMatCau(double R)
{
	double S;
	S = 4 * PI * R * R;
	return S;
}