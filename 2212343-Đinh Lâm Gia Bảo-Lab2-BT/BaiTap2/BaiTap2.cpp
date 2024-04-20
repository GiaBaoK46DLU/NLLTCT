#include<iostream>
#include<conio.h>
using namespace std;
#define MAX 3600 
#define SIXTY 60

void DoiThoiGian(unsigned int soGiay);
int main()
{
	int soGiay;
	cout << "So giay la: ";
	cin >> soGiay;
	DoiThoiGian(soGiay);
	return 0;
}
void DoiThoiGian(unsigned int soGiay)
{
	float gio, phut, giay;
	gio = soGiay / MAX;
	phut = (soGiay % MAX) / SIXTY;
	giay = (soGiay % MAX) % SIXTY;
	cout << gio << "gio:" << phut << "phut:" << giay << "giay" << endl;
	return;
}
