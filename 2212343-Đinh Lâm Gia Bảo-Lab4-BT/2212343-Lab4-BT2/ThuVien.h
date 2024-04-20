bool KiemTraLaSoNguyenTo(int n);
void XuatSNT(int n);
int DemSNT(int n);
int TinhTongUocSNT(int n);
void PhanTichThuaSo(int n);
 
bool KiemTraLaSoNguyenTo(int n)
{
	if (n < 2)
		return false;
	bool result = true;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % 1 == 0)
		{
			result = false;
			break;
		}
	return result;
}
void XuatSNT(int n)
{
	cout << "\n";
	int count = 0;
	for (int i = 1; i <= n; i++)
		if (KiemTraLaSoNguyenTo(i))
		{
			count++;
			cout << i << "\t";
			if (count % 5 == 0)
				cout << "\n";
		}
}
int DemSNT(int n)
{

}