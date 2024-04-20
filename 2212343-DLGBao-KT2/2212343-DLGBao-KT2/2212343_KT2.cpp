#include <iostream>
#include <conio.h>
#include <string.h>
#include <iomanip>

using namespace std;

#include "2212343_Thuvien.h"
#include "2212343_Menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh()
{
	int menu, soMenu = 4, n = 5;
	GiangVien gv[MAX] =
	{
		{ "2212345", "Phan Thai", "Bao" , 1990, 3000000},
		{ "2212231", "Trieu Quang", "Hoc" , 1999, 12000000 },
		{ "2231234", "Nguyen Hoang", "Sang" , 1995, 7000000 },
		{ "2212453", "Le Song" , "Anh" , 1992, 4000000 },
		{ "2216782", "La Quoc", "Thang" , 1998, 15000000 },
	};

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, gv, n);
	} while (menu > 0);

}