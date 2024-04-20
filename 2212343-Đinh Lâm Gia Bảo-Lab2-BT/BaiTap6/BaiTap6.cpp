#include<iostream>
using namespace std;


double TinhChiSoBMI(double w, double h);

int main()
{
	double w, h, BMI;
	cout << "Khoi luong co the la(tinh theo kg): ";
	cin >> w;
	cout << "Chieu cao cua nguoi do la(tinh theo m): ";
	cin >> h;
	BMI = TinhChiSoBMI(w, h);
	cout << "Chi so khoi co the nguoi do la: " << BMI << endl;
	return 0;
}
double TinhChiSoBMI(double w, double h)
{
	double BMI;
	BMI = w / (h * h);
	return BMI;
}