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
	cout << endl << "4. Kiem tra ma tran co phai la ma tran doi xung?";
	cout << endl << "5. Kiem tra ma tran co phai la ma tran tam giac tren.";
	cout << endl << "6. Kiem tra ma tran co phai la ma tran tam giac duoi ";
	cout << endl << "7. Kiem tra ma tran co phai la ma tran cheo ";
	cout << endl << "8. Kiem tra ma tran co phai la ma tran don vi ";
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
		cout << endl << "\n2. Nhap tu dong ma tran vuong\n";
		cout << "\nNhap cap ma tran vuong: "; 
		cin >> n;
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
		cout << endl << "\n4. Kiem tra ma tran co phai la ma tran doi xung?\n";
		cout << "\nMa tran tien hanh:\n";
		XuatMaTran(a, n);
		if (KiemTraDoiXung(a, n) == 0) cout << "Khong phai la ma tran doi xung";
		if (KiemTraDoiXung(a, n) == 1) cout << "Ma tran la ma tran doi xung";
		break;
	case 5:
		system("CLS");
		cout << endl << "\n5. Kiem tra ma tran co phai la ma tran tam giac tren?\n";
		cout << "\nMa tran tien hanh:\n";
		XuatMaTran(a, n);
		if (KiemTraMTTamGiacTren(a, n) == 0) cout << "Khong phai la ma tran tam giac tren";
		if (KiemTraMTTamGiacTren(a, n) == 1) cout << "Ma tran la ma tran tam giac tren";
		break;
	case 6:
		system("CLS");
		cout << endl << "\n6. Kiem tra ma tran co phai la ma tran tam giac duoi?\n";
		cout << "\nMa tran tien hanh:\n";
		XuatMaTran(a, n);
		if (KiemTraMTTamGiacDuoi(a, n) == 0) cout << "Khong phai la ma tran tam giac duoi";
		if (KiemTraMTTamGiacDuoi(a, n) == 1) cout << "Ma tran la ma tran tam giac duoi";
		break;
	case 8:
		system("CLS");
		cout << endl << "\n8. Kiem tra ma tran co phai la ma tran don vi?\n";
		cout << "\nMa tran tien hanh:\n";
		XuatMaTran(a, n);
		if (KiemTraMTDonVi(a, n) == 0) cout << "Khong phai la ma tran tam giac duoi";
		if (KiemTraMTDonVi(a, n) == 1) cout << "Ma tran la ma tran don vi";
		break;
	default:
		break;
	}
	_getch();
}
