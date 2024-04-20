#define MAX 100
#define NGANGDOI '='
#define NGANGDON '-'

typedef char String[MAX];

struct GiangVien
{
	char maGV[8];
	char hoLot[20];
	char ten[6];
	unsigned int namSinh;
	double Luong;
};

void Nhap_1GV(GiangVien& gv)
{
	cout << "\nMSGV (dung 7 ky so) : ";
	cin.ignore(MAX, '\n');
	gets_s(gv.maGV, 8);

	cout << "\nHo va ten lot: ";
	gets_s(gv.hoLot, 20);

	cout << "\nTen giang vien: ";
	gets_s(gv.ten, 6);

	cout << "\nNam sinh: ";
	cin >> gv.namSinh;

	cout << "\nNhap Luong: ";
	cin >> gv.Luong;
}
void Nhap_DSGV(GiangVien gv[MAX], int& n)
{
	int i;
	cout << "\nNhap so giang vien : ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		system("CLS");
		cout << "\nNhap thong tin cho giang vien " << i + 1 << " : ";
		Nhap_1GV(gv[i]);
	}
}
void XuatKeNgang(int loai)
{
	int i;
	cout << "\n";
	cout << setiosflags(ios::left) << "|";
	if (loai == 1)
	{
		for (i = 1; i <= 83; i++)
			cout << NGANGDOI;
	}
	else
	{
		for (i = 1; i <= 83; i++)
			cout << NGANGDON;
	}
	cout << "|";
}
void XuatTieuDe()
{
	XuatKeNgang(1);
	cout << endl;
	cout << setiosflags(ios::left)
		<< '|'
		<< setw(10) << "MSGV"
		<< '|'
		<< setw(29) << "Ho va ten lot"
		<< setw(8) << "Ten"
		<< '|'
		<< setw(12) << "Nam sinh"
		<< '|'
		<< setw(14) << "Luong"
		<< '|';
	XuatKeNgang(1);
}
void Xuat_1GV(GiangVien gv)
{
	cout << endl;
	cout << setiosflags(ios::left)
		<< '|'
		<< setw(10) << gv.maGV
		<< '|'
		<< setw(29) << gv.hoLot
		<< setw(8) << gv.ten
		<< '|'
		<< setw(12) << gv.namSinh
		<< '|'
		<< setw(14) << setiosflags(ios::fixed) << setprecision(1) << gv.Luong
		<< '|';
}
void Xuat_DSGV(GiangVien gv[MAX], int n)
{
	int i;
	XuatTieuDe();
	for (i = 0; i < n; i++)
	{
		Xuat_1GV(gv[i]);
		if ((i + 1) % 5 == 0);
		XuatKeNgang(2);
	}
	XuatKeNgang(1);
}
void HoanVi(GiangVien& a, GiangVien& b)
{
	GiangVien c = a;
	a = b;
	b = c;
}
void TangDan_HoTen(GiangVien gv[MAX], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (_strcmpi(gv[i].ten, gv[j].ten) > 0)
				HoanVi(gv[i], gv[j]);
			if (_strcmpi(gv[i].ten, gv[j].ten) == 0)
				if (_strcmpi(gv[i].hoLot, gv[j].hoLot) > 0)
					HoanVi(gv[i], gv[j]);
		}
	}
}
