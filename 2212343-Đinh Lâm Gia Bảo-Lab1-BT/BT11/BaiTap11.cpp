#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float R, h;
	float chuvi, dientich, dtxq, dttp, V, pi;
	cout << "Nhap ban kinh day R: ";
	cin >> R;
	cout << "Nhap chieu cao h: ";
	cin >> h;
	pi = 3.14;
	chuvi = 2 * pi * R;
	cout << "Chu vi mat day la: " << chuvi << endl;
	dientich = pi * R * R;
	cout << "Dien tich mat day la: " << dientich << endl;
	V = pi * R * R * h;
	cout << "The tich hinh tru tron la: " << V << endl;
	dtxq = 2 * pi * R * h;
	cout << "Dien tich xung quanh hinh tru tron la: " << dtxq << endl;
	dttp = (2 * pi * R * h) + (2 * pi * R * R);
	cout << "Dien tich toan phan hinh tru tron la: " << dttp << endl;

	return 0;
}