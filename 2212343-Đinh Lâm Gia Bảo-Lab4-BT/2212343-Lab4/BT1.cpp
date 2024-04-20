#include <iostream>
#include <conio.h>

using namespace std;

#include "ThuVien.h"
#include "Menu.h"

void ChayChuongTrinh();

int main()
{

	ChayChuongTrinh();

	return 0;
}
void ChayChuongTrinh()
{
	int soMenu = 8,
		menu;

	unsigned int n;
	cout << "\nNhap vao 1 so nguyen duong n: ";
	cin >> n;

	do
	{
		menu = ChonMenu(soMenu, n);
		XuLyMenu(menu, n);
	} while (menu > 0);
	_getch();
}