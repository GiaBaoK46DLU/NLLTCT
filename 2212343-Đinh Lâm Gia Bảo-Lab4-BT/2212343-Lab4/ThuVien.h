void XuatDaySo(unsigned int n);
int demSoThoaDieuKien(unsigned int n);
int demSoLuongChuSo(int n);
int DaoNguocSo(int n);
int TongCacChuSo(int n);
int TimChuSoDauTien(int n);
void XuatSoHoanChinh(int n);
int TimSoNguyenThoaDieuKien(int n);

void XuatDaySo(unsigned int n)
{
	cout << "\n";
	for (int i = 1; i <= n; i++)
	{
		cout << i << "\t";
		if (i % 10 == 0)
			cout << "\n";
	}
}
int demSoThoaDieuKien(unsigned int n)
{
	int count = 0;

	for (int i = 1; i <= n; i++)
		if (i % 3 == 0 && i % 4 != 0)
			count++;

	return count;
}
int demSoLuongChuSo(int n)
{
	int count = 0;

	while (n % 10 != 0)
	{
		count++;
		n /= 10;
	}

	return count;
}
int DaoNguocSo(int n)
{
	int soDaoNguoc = 0;
	int tmp;

	while (n > 0)
	{
		tmp = n % 10;
		soDaoNguoc = soDaoNguoc * 10 + tmp;
		n /= 10;
	}

	return soDaoNguoc;
}
int TongCacChuSo(int n)
{
	int sum = 0;

	while (n % 10 > 0)
	{
		sum += (n % 10);
		n /= 10;
	}

	return sum;
}
int TimChuSoDauTien(int n)
{
	int first;

	while (n % 10 > 0)
	{
		first = n % 10;
		n /= 10;
	}

	return first;
}
bool laSoHoanChinh(int n)
{
	int sum = 0;

	for (int i = 1; i <= n / 2; i++)
		if (n % i == 0)
			sum += i;

	return sum == n;
}
void XuatSoHoanChinh(int n)
{
	cout << "\nCac so hoan chinh tu 1 .. " << n << " la: ";
	for (int i = 1; i <= n; i++)
		if (laSoHoanChinh(i))
			cout << i << ", ";
}
int TimSoNguyenThoaDieuKien(int n)
{
	int m = 1;
	int sum = 0;

	while (sum + m <= n)
	{
		sum += m;
		m++;
	}

	m--;
	return m;
}
