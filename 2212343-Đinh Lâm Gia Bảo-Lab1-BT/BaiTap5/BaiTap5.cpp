#include<iostream>
using namespace std;
#define SIXTY 60

int main()
{
	int n, gio, phut, giay;
	const int MAX = 3600;
	cout << "Nhap so giay n: ";
	cin >> n;
	gio = n / MAX;
	phut = (n % MAX) / SIXTY;
	giay = (n % MAX) % SIXTY;
	cout << gio << ":" << phut << ":" << giay;

	return 0;
}