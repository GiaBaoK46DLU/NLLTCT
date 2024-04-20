#define MAX 100
#define TAB '\t'
typedef int MaTranVuong[MAX][MAX];
void NhapMaTran(MaTranVuong a, int n);
void NhapTuDong(MaTranVuong a, int n);
void XuatMaTran(MaTranVuong a, int n);
void HoanVi(int& a, int& b);
void HoanViCot(MaTranVuong a, int n, int j, int h);
void HoanViHang(MaTranVuong a, int n, int i, int k);
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

void HoanVi(int& a, int& b)
{
	int c = b;
	b = a;
	a = c;
}

void HoanViCot(MaTranVuong a, int n, int j, int h)
{

	for (int i = 0; i < n; i++)
	{
		HoanVi(a[i][j], a[i][h]);
	}
}
void HoanViHang(MaTranVuong a, int n, int i, int k)
{
	for (int j = 0; j < n; j++)
	{
		HoanVi(a[i][j], a[k][j]);
	}
}

