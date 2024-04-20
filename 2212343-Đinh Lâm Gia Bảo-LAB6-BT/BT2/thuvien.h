#define MAX 100
#define TAB '\t'

typedef int MaTranVuong[MAX][MAX];

void NhapTuDong(MaTranVuong a, int n);
void XuatMaTran(MaTranVuong a, int n);
bool KiemTraDoiXung(MaTranVuong a, int n);
void NhapMaTran(MaTranVuong a, int n);
bool KiemTraMTTamGiacTren(MaTranVuong a, int n);
bool KiemTraMTDonVi(MaTranVuong a, int n);

void NhapMaTran(MaTranVuong a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)//hang i
		for (j = 0; j < n; j++)//cot j
		{
			cout << "\na[" << i << "][" << j << "]=";
			cin >> a[i][j];
		}
}
void NhapTuDong(MaTranVuong a, int n)
{
	int i, j;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			a[i][j] = (rand() % (n * n)) - (n * n) / 2;
}
void XuatMaTran(MaTranVuong a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)//hang i
	{
		cout << "\n";
		for (j = 0; j < n; j++)
			cout << a[i][j] << TAB;
	}
}
bool KiemTraDoiXung(MaTranVuong a, int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i][j] != a[j][i]) 
				return 0;
	return 1;
}
bool KiemTraMTTamGiacTren(MaTranVuong a, int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i][j] == 0) return 1;
	return 0;
}
bool KiemTraMTTamGiacDuoi(MaTranVuong a, int n)
{
	for (int i = 1; i < n - 1; i++)
		for (int j = 0; j < n - 1; j++)
			if (a[i][j] == 0) return 1;
	return 0;
}
bool KiemTraMTDonVi(MaTranVuong a, int n)
{
	int tong = 0, tich = 1;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			tong += a[i][j];
			tich *= a[i][i];
		}
	if (tong == n && tich == 1) return 1;
	return 0;

}