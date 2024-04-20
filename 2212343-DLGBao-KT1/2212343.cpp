#include<iostream>
#include<conio.h>

using namespace std;

#include"2212343_ThuVien.h"
#include"2212343_Menu.h"


void ChayChuongTrinh();
int main()
{
	ChayChuongTrinh();
	return 1;

}
void ChayChuongTrinh()
{
	int soMenu = 4, menu;
	int n = 0;
	MaTranVuong a;
	do {
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
	_getch();
}