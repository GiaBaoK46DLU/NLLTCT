#define MAX 100
#define TAB '\t'

typedef int MaTranVuong[MAX][MAX];

void NhapMaTran(MaTranVuong a, int n);
void XuatMaTran(MaTranVuong a, int n);
double TinhTongTamGiacTren(MaTranVuong a, int n);
void HoanVi(int& a, int& b);
void HoanViCot(MaTranVuong a, int n, int j, int h);

void NhapMaTran(MaTranVuong a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			cout << "\na[" << i << "][" << j << "]=";
			cin >> a[i][j];
		}
}
void XuatMaTran(MaTranVuong a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		cout << "\n";
		for (j = 0; j < n; j++)
			cout << a[i][j] << TAB;
	}
}
double TinhTongTamGiacTren(MaTranVuong a, int n)
{
	double sum = 0;
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - 1; j++)
			if (i < j)
				sum = sum + a[i][j];
	return sum;
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
