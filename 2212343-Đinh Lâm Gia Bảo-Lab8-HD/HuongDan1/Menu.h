void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, NhanVien a[MAX], int& n);

void XuatMenu()
{
	cout << "\n============== He thong chuc nang =============\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap danh sach nhan vien";
	cout << "\n2. Xem danh sach nhan vien";
	cout << "\n3. Them mot nhan vien vao cuoi danh sach";
	cout << "\n4. Xoa mot nhan vien theo ma nhan vien";
	cout << "\n5. Sua thong tin nhan vien theo ma nhan vien";
	cout << "\n6. Tim nhan vien theo ma so";
	cout << "\n7. Tim nhan vien theo ten";
	cout << "\n8. Sap danh sach nhan vien tang dan theo ma nhan vien";
	cout << "\n9. Sap danh sach nhan vien tang dan theo ten-ho-luong";
	cout << "\n10. Tinh tong luong thang";
	cout << "\n11. Liet ke cac nhan vien co luong >= x (nhap tu ban phim)";
	cout << "\n12. Liet ke cac nhan vien co nam sinh trong khoang [u,v]";
	cout << "\n=======================================================================";
	cout << "\n (Du lieu da duoc khoi tao, chon 1 neu muon tao lai du lieu) ";
	cout << "\n=======================================================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << "\n\nNhap 1 so trong khoang [0.." << soMenu << "] de chon chuc nang, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, NhanVien a[MAX], int& n)
{
	NhanVien p;
	char maNV[8], ten[7];
	int kq;
	double x;
	unsigned int u, v;

	system("cls");

	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Nhap danh sach nhan vien";
		Nhap_DSNV(a, n);
		system("cls");
		Xuat_DSNV(a, n);
		cout << "\nSo nhan vien trong danh sach: n = " << n;
		break;

	case 2:
		cout << "\n2. Xem danh sach nhan vien";
		Xuat_DSNV(a, n);
		cout << "\nSo nhan vien trong danh sach: n = " << n;
		break;

	case 3:
		cout << "\n3. Them mot nhan vien vao cuoi danh sach";
		cout << "\nNhap thong tin nhan vien can chen vao cuoi danh sach:\n";
		Nhap_1NV(p);
		system("cls");
		cout << "\nDanh sach ban dau:\n";
		Xuat_DSNV(a, n);
		cout << "\nSo nhan vien trong danh sach, n = " << n;
		ThemNhanVien_Cuoi(a, n, p);
		cout << "\nDanh sach ket qua:\n";
		Xuat_DSNV(a, n);
		cout << "\nSo nhan vien trong danh sach sau khi them: n = " << n;
		break;

	case 4:
		cout << "\n4. Xoa mot nhan vien theo ma nhan vien";
		cout << "\nNhap ma nhan vien can xoa: ";
		cin >> maNV;
		cout << "\nDanh sach hien hanh:\n";
		Xuat_DSNV(a, n);
		cout << "\nSo nhan vien trong danh sach, n = " << n;
		XoaNhanVien_MaNV(a, n, maNV);

		cout << "\nDanh sach ket qua:\n";
		Xuat_DSNV(a, n);
		cout << "\nSo nhan vien trong danh sach sau khi xoa: n = " << n;
		break;

	case 5:
		cout << "\n5. Sua thong tin nhan vien theo ma nhan vien";
		cout << "\nDanh sach nhan vien hien hanh:\n";
		Xuat_DSNV(a, n);
		cout << "\nNhap ma nhan vien can sua: ";
		cin >> maNV;
		SuaNhanVien_MaNV(a, n, maNV);

		cout << "\nDanh sach ket qua:\n";
		Xuat_DSNV(a, n);
		break;

	case 6:
		cout << "\n6. Tim nhan vien theo ma so";
		cout << "\nDanh sach hien hanh:\n";
		Xuat_DSNV(a, n);
		cout << "\nNhap ma nhan vien can tim: ";
		cin >> maNV;
		kq = TimNhanVien_MaNV(a, n, maNV);

		if (kq == -1)
			cout << "\nKhong co nhan vien nao trong danh sach co ma so: " << maNV;
		else
		{
			cout << "\nThong tin nhan vien co ma so: " << maNV << " : \n";
			XuatTieuDe();
			cout << endl;
			Xuat_1NV(a[kq]);
			XuatKeNgang();
		}
		break;

	case 7:
		cout << "\n7. Tim nhan vien theo ten";
		cout << "\nDanh sach hien hanh:\n";
		Xuat_DSNV(a, n);
		cout << "\nNhap ten nhan vien can tim: ";
		cin >> ten;
		TimNhanVien_Ten(a, n, ten);
		break;

	case 8:
		cout << "\n8. Sap danh sach nhan vien tang dan theo ma nhan vien";
		cout << "\nDanh sach ban dau:\n";
		Xuat_DSNV(a, n);
		SapTang_MaNV(a, n);
		cout << "\nDanh sach ket qua:\n";
		Xuat_DSNV(a, n);
		break;

	case 9:
		cout << "\n9. Sap danh sach nhan vien tang dan theo ten-ho-luong";
		cout << "\nDanh sach ban dau:\n";
		Xuat_DSNV(a, n);
		SapTang_Ten_Ho_Luong(a, n);
		cout << "\nDanh sach ket qua:\n";
		Xuat_DSNV(a, n);
		break;

	case 10:
		cout << "\n10. Tinh tong luong thang";
		cout << "\nDanh sach hien hanh:\n";
		Xuat_DSNV(a, n);
		cout << "\nTong luong thang: tong = " << TinhTongLuong(a, n);
		break;

	case 11:
		cout << "\n11. Liet ke cac nhan vien co luong >= x (nhap tu ban phim)";
		cout << "\nNhap x: ";
		cin >> x;
		cout << "\nDanh sach hien hanh:\n";
		Xuat_DSNV(a, n);
		Xuat_DSNV_Luong_KhongNhoHon_X(a, n, x);
		break;
	case 12:
		cout << "\n12. Liet ke cac nhan vien co nam sinh trong khoang [u,v]";
		cout << "\nNhap u: ";
		cin >> u;
		cout << "\nNhap v: ";
		cin >> v;
		system("cls");
		cout << "\nDanh sach hien hanh:\n";
		Xuat_DSNV(a, n);
		Xuat_DSNV_NamSinh_u_v(a, n, u, v);
		break;
	}
	_getch();
}