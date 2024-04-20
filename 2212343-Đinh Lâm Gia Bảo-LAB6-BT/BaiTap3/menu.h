void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MaTranVuong a, int& n);

void XuatMenu()
{
	cout << endl << "============== CHON CHUC NANG =============";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Nhap ma tran vuong";
	cout << endl << "2. Nhap tu dong ma tran vuong";
	cout << endl << "3. Xem ma tran vuong";
	cout << endl << "4. Hoan vi 2 cot j va h cua ma tran";
	cout << endl << "5. Hoan vi 2 hang i va k cua ma tran.";
	cout << endl << "6. Tim ma tran hoan vi ";
	cout << endl << "==========================================";
}
int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so trong khoang[0,...," << soMenu << "] de chon chuc nang,stt=";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;

	}
	return stt;
}
void XuLyMenu(int menu, MaTranVuong a, int& n)
{
	int j, h, i, k;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << endl << "\n1. Nhap ma tran vuong\n";
		cout << "\nNhap cap ma tran vuong: "; cin >> n;
		NhapMaTran(a, n);
		cout << "\nMa tran vua nhap:\n";
		XuatMaTran(a, n);
		break;
	case 2:
		system("CLS");
		cout << endl << "\n2. Nhap tu dong ma tran vuong\n";
		cout << "\nNhap cap ma tran vuong: "; cin >> n;
		NhapTuDong(a, n);
		cout << "\nMa tran vua nhap:\n";
		XuatMaTran(a, n);
		break;
	case 3:
		system("CLS");
		cout << endl << "\n3. Xem ma tran vuong:\n";
		XuatMaTran(a, n);
		break;
	case 4:
		system("CLS");
		cout << endl << "\n4. Hoan vi 2 cot j va h cua ma tran\n";
		cout << "\nMa tran tien hanh:\n";
		XuatMaTran(a, n);
		cout << "\nNhap cot j = "; cin >> j;
		cout << "\nNhap cot h = "; cin >> h;
		HoanViCot(a, n, j, h);
		cout << "\nMa tran moi:\n";
		XuatMaTran(a, n);
		break;
	case 5:
		system("CLS");
		cout << endl << "\n5. Hoan vi 2 hang i va k cua ma tran\n";
		cout << "\nMa tran tien hanh:\n";
		XuatMaTran(a, n);
		cout << "\nNhap hang i = "; cin >> i;
		cout << "\nNhap hang k = "; cin >> k;
		HoanViCot(a, n, i, k);
		cout << "\nMa tran moi:\n";
		XuatMaTran(a, n);
	case 6:
		system("CLS");
		cout << endl << "\n6. Tim ma tran hoan vi\n";
		cout << "\nMa tran tien hanh:\n";
		XuatMaTran(a, n);
		break;
	default:
		break;
	}
	_getch();
}
