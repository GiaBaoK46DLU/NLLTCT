#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float R, S, V, pi;
	cout << "Nhap ban kinh R: ";
	cin >> R;
	pi = 3.14;
	V = (4 / 3) * pi * R * R * R;
	cout << "The tich khoi cau la: " << V << endl;
	S = 4 * pi * R * R;
	cout << "Dien tich khoi cau la: " << S << endl;

	return 0;
}
