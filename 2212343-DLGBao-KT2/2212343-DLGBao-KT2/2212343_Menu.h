void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, GiangVien gv[MAX], int& n);

void XuatMenu()
{
	cout << "\n================== HE THONG CHUC NANG ==================\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap danh sach giang vien tu ban phim;";
	cout << "\n2. Nhap co dinh danh sach it nhat 5 giang vien";
	cout << "\n3. Xuat danh sach giang vien";
	cout << "\n4. Sap xep danh sach giang vien tang dan theo ho va ten";
	cout << "\n===========================================================\n";
}

int ChonMenu(int soMenu)
{
	int LuaChon;
	while (true)
	{
		system("cls");
		XuatMenu();
		cout << "\nNhap 1 so trong khoang [0,.." << soMenu << "] de chon chuc nang, LuaChon = ";
		cin >> LuaChon;
		if (0 <= LuaChon && LuaChon <= soMenu)
			break;
	}

	return LuaChon;
}

void XuLyMenu(int menu, GiangVien gv[MAX], int& n)
{
	char ten[10];
	GiangVien kq;
	system("CLS");
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Nhap danh sach giang vien tu ban phim";
		Nhap_DSGV(gv, n);
		cout << "\nDanh sach giang vien: ";
		Xuat_DSGV(gv, n);
		break;
	case 2:
		cout << "\n2. Nhap co dinh danh sach it nhat 5 giang vien";
		Xuat_DSGV(gv, n);
		break;
	case 3:
		cout << "\n3. Xuat danh sach giang vien";
		Xuat_DSGV(gv, n);
		break;
	case 4:
		cout << "\n4. Sap xep danh sach giang vien tang dan theo ho va ten ";
		cout << "\n Danh sach hien tai: \n";
		Xuat_DSGV(gv, n);
		TangDan_HoTen(gv, n);
		cout << "\nDanh sach sau khi sap xep:\n";
		Xuat_DSGV(gv, n);
		break;
	}

	_getch();
}
