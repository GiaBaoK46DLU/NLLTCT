#include<iostream>
#include<math.h>
using namespace std;

double TinhCanhBen(int dayLon, int dayBe, int chieuCao);
double TinhChuVi(int dayLon, int dayBe, double canhBen);
double TinhDienTich(int dayLon, int dayBe, int chieuCao);
int main()
{
	int dayLon, dayBe, chieuCao;
	cout << "Day lon hinh thang la: ";
	cin >> dayLon;
	cout << "Day be hinh thang la: ";
	cin >> dayBe;
	cout << "Chieu cao hinh thang la: ";
	cin >> chieuCao;
	double canhBen, ChuVi, DienTich;
	canhBen = TinhCanhBen(dayLon, dayBe, chieuCao);
	ChuVi = TinhChuVi(dayLon, dayBe, canhBen);
	cout << "Chu Vi hinh thang la: " << ChuVi << endl;
	DienTich = TinhDienTich( dayLon, dayBe, chieuCao);
	cout << "Dien Tich hinh thang la: " << DienTich << endl;
	return 0;
}
double TinhCanhBen(int dayLon, int dayBe, int chieuCao)
{
	double canhBen, p;
	p = (dayLon - dayBe) / 2;
	canhBen = sqrt(p * p + chieuCao * chieuCao);
	return canhBen;
}
double TinhChuVi(int dayLon, int dayBe, double canhBen)
{
	double ChuVi;
	ChuVi = dayLon + dayBe + 2 * canhBen;
	return ChuVi;
}
double TinhDienTich(int dayLon, int dayBe, int chieuCao)
{
	double DienTich;
	DienTich = ((dayLon + dayBe) * chieuCao) / 2;
	return DienTich;
}