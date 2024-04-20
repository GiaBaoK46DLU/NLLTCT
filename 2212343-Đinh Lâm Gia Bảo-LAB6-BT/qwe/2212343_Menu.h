void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MaTranVuong a, int& n);

void XuatMenu()
{
	cout << "==========CHON CHUC NANG==========";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Nhap ma tran vuong ";
	cout << "\n2. Xuat ma tran vuong ";
	cout << "\n3. Tinh tong tam giac tren cua ma tran ";
	cout << "\n4. Hoan vi hai cot trong ma tran ";
	cout << "==================================";
}
int ChonMenu(int soMenu)
{
	int LuaChon;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so trong khoang tu [0,...," << soMenu << "] de chon chuc nang, LuaChon= ";
		cin >> LuaChon;
		if (0 <= LuaChon && LuaChon <= soMenu)
			break;
	}
	return LuaChon;
}
void XuLyMenu(int menu, MaTranVuong a, int& n)
{
	int j, h;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << endl << "\n1. Nhap ma tran vuong\n";
		cout << "\nNhap cap ma tran vuong: ";
		cin >> n;
		NhapMaTran(a, n);
		cout << "\nMa tran vua nhap:\n";
		XuatMaTran(a, n);
		break;
	case 2:
		system("CLS");
		cout << endl << "\n2. Xuat ma tran vuong\n";
		XuatMaTran(a, n);
		break;
	case 3:
		system("CLS");
		cout << endl << "\n3. Tinh tong tam giac tren\n";
		TinhTongTamGiacTren(a, n);
		break;
	case 4:
		system("CLS");
		cout << endl << "\n4. Hoan vi hai cot trong ma tran \n";
		cout << "\nMa tran de hoan vi:\n";
		XuatMaTran(a, n);
		cout << "\nNhap cot j = "; cin >> j;
		cout << "\nNhap cot h = "; cin >> h;
		HoanViCot(a, n, j, h);
		cout << "\nMa tran moi:\n";
		XuatMaTran(a, n);
		break;
	}
}

