void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, String a);

void XuatMenu()
{
	cout << "===========CHON CHUC NANG===========";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap chuoi";
	cout << "\n2. Xem chuoi";
	cout << "\n3. Tinh chieu dai chuoi";
	cout << "\n4. Chen ky tu x vao dau chuoi";
	cout << "\n5. Chen ky tu x vao cuoi chuoi";
	cout << "\n6. Chen ky tu x vao chuoi a tai vi tri cho truoc";
	cout << "\n7. Xoa ky tu dau chuoi";
	cout << "\n8. Xoa ky tu cuoi chuoi";
	cout << "\n9. Xoa ky tu tai vi tri cho truoc";
	cout << "\n10. Cat ky tu dau chuoi roi chen vao cuoi chuoi(da cat)";
	cout << "\n11. Cat ky tu cuoi chuoi roi chen vao dau chuoi(da cat)";
	cout << "\n12. Xoa tat ca ky tu x cho truoc khoi chuoi";
	cout << "\n13. Thay the tat ca ky tu x trong chuoi thanh ky tu y";
}
int ChonMenu(int soMenu)
{
	int LuaChon;
	while (true)
	{
		system("CLS");
		XuatMenu();
		cout << "Chon 1 chuc nang tu [1..." << soMenu <<"] de chon chuc nang, LuaChon= ";
		cin >> LuaChon;
		if (0 <= LuaChon && LuaChon <= soMenu)
			break;
	} 
	return LuaChon;
}
void XuLyMenu(int menu, String a)
{
	int x;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		system("CLS");
		cout << "\n1. Nhap chuoi a: ";
		NhapChuoi(a, 'a');
		cout << "\nChuoi vua nhap: ";
		XuatChuoi(a);
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xem chuoi moi nhap la: ";
		XuatChuoi(a);
		break;
	case 3:
		system("CLS");
		cout << "\n3. Tinh chieu dai chuoi";
		cout << "\nChieu dai cua chuoi la: " << TinhChieuDaiChuoi(a);
		break;
	case 4:
		system("CLS");
		cout << "\n4. Chen ky tu x vao dau chuoi";
		cout << "\nNhap ky tu x ";
		cin >> x;
		cout << "Chuoi moi sau khi chen ky tu x: ";
		ChenDau_KT(a, x);
		break;
	case 5:
		system("CLS");
		cout << "\n5. Chen ky tu x vao cuoi chuoi";
		cout << "Nhap ky tu x ";
		cin >> x;
		cout << "Chuoi moi sau khi chen ky tu x: ";
		ChenCuoi_KT(a, x);
		break;
	case 6:
		system("CLS");
		cout << "\n6. Chen ky tu x vao chuoi a tai vi tri cho truoc";
		break;
	case 7:
		system("CLS");
		cout << "\n7. Xoa ky tu dau chuoi";
		XoaDau_KT(a);
		break;
	case 8:
		system("CLS");
		cout << "\n8. Xoa ky tu cuoi chuoi";
		break;
	case 9:
		system("CLS");
		cout << "\n9. Xoa ky tu tai vi tri cho truoc";
		break;
	case 10:
		system("CLS");
		cout << "\n10. Cat ky tu dau chuoi roi chen vao cuoi chuoi(da cat)";
		break;
	case 11:
		system("CLS");
		cout << "\n11. Cat ky tu cuoi chuoi roi chen vao dau chuoi(da cat)";
		break;
	case 12:
		system("CLS");
		cout << "\n12. Xoa tat ca ky tu x cho truoc khoi chuoi";
		break;
	case 13:
		system("CLS");
		cout << "\n13. Thay the tat ca ky tu x trong chuoi thanh ky tu y";
		break;
	}
	_getch();
}
