void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MaTranVuong a, int& n);

void XuatMenu()
{
	cout << endl << "============== CHON CHUC NANG =============";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Nhap ma tran vuong ";
	cout << endl << "2. Xem ma tran vuong ";
	cout << endl << "3. Tinh tong tam giac tren cua ma tran vuong";
	cout << endl << "4. Hoan vi 2 cot j va h cua ma tran vuong ";
	cout << endl << "==========================================";
}
int ChonMenu(int soMenu)
{
	int LuaChon;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so trong khoang[0,...," << soMenu << "] de chon chuc nang, LuaChon= ";
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
		cout << endl << "\n1. Nhap ma tran vuong \n";
		cout << "\nNhap cap ma tran : "; 
		cin >> n;
		NhapMaTran(a, n);
		cout << "\nMa tran vuong vua nhap:\n";
		XuatMaTran(a, n);
		break;
	case 2:
		system("CLS");
		cout << endl << "\n2. Xuat ma tran vuong \n";
		XuatMaTran(a, n);
		break;
	case 3:
		system("CLS");
		cout << endl << "\n3. Tinh tong tam giac tren cua ma tran vuong\n";
		cout << "\nMa tran tien hanh:\n";
		XuatMaTran(a, n);
		cout << "\nTong tam giac tren cua ma tran = " << TinhTong_TamGiac_Tren(a, n);
		break;
	case 4:
		system("CLS");
		cout << endl << "\n4. Hoan vi 2 cot j va h cua ma tran vuong\n";
		cout << "\nMa tran tien hanh:\n";
		XuatMaTran(a, n);
		cout << "\nNhap cot j = "; cin >> j;
		cout << "\nNhap cot h = "; cin >> h;
		HoanViCot(a, n, j, h);
		cout << "Ma tran sau khi hoan vi:";
		XuatMaTran(a, n);
		break;
	default:
		break;
	}
	_getch();
}