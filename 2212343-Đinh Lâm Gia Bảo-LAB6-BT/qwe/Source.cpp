#include <iostream>
#include <conio.h>

using namespace std;

#include<time.h>
#include<stdlib.h>

#include "2212343_Thuvien.h"
#include "2212343_Menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}
void ChayChuongTrinh()
{
	int soMenu = 4, menu, n = 0;
	MaTranVuong a;
	do {
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);

	} while (menu > 0);
	_getch();
}