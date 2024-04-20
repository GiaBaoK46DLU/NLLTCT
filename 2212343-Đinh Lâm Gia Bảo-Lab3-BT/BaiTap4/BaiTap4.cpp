#include<iostream>
#include<conio.h>
using namespace std;
double TinhChiSoKhoiBMI(double khoiLuong, double chieuCao);
double PhanLoaiChiSo(double chiSo);
int main()
{
	double khoiLuong, chieuCao, chiSo;
	cout << "Nhap vao can nang cua ban (kg) = ";
	cin >> khoiLuong;
	cout << "Nhap vao chieu cao cua ban (cm) = ";
	cin >> chieuCao;
	chiSo = TinhChiSoKhoiBMI(khoiLuong, chieuCao);
	cout << "Chi so BMI cua ban la:" << chiSo << endl;
	chiSo = PhanLoaiChiSo(chiSo);
	_getch();
	return 0;
}
double TinhChiSoKhoiBMI(double khoiLuong, double chieuCao)
{
	double BMI, chieucaomet;
	chieucaomet = (chieuCao / 100) * (chieuCao / 100);
	BMI = khoiLuong / chieucaomet;
	return BMI;
}
double PhanLoaiChiSo(double chiSo)
{
	if (chiSo < 15)
		cout << "Doi khat" << endl;
	else if (chiSo >= 15 && chiSo < 17.5)
		cout << "Bieng an" << endl;
	else if (chiSo >= 17.5 && chiSo < 18.5)
		cout << "Thieu can" << endl;
	else if (chiSo >= 18.5 && chiSo < 25)
		cout << "Ly tuong" << endl;
	else if (chiSo >= 25 && chiSo < 30)
		cout << "Thua can" << endl;
	else if (chiSo >= 30 && chiSo < 40)
		cout << "Beo phi" << endl;
	else if (chiSo >= 40)
		cout << "Tre em bi beo phi" << endl;
	return chiSo;
}