#include <cmath>
#include <iostream>
#include<conio.h>
using namespace std;
int TimUCLN(int m, int n);
int TimBCNN(int m, int n);

int main()
{
	int  m, n;
	cout << "Nhap so thu nhat: ";
	cin >> m;
	cout << "Nhap so thu hai: ";
	cin >> n;
	TimBCNN(m, n);
	TimUCLN(m, n);
	_getch();
	return 0;
}
int TimUCLN(int m, int n)
{
	int i, min, max, ucln;
	if (m == 0 && n == 0) {
		cout << "Hai so 0 khong co uoc chung lon nhat" << endl;
	}
	else if (m != 0 && n == 0) {
		cout << "Uoc chung lon nhat cua " << m << " va " << n << " la " << abs(m) << endl;
	}
	else if (m == 0 && n != 0) {
		cout << "Uoc chung lon nhat cua " << m << " va " << n << " la " << abs(n) << endl;
	}
	else {
		if (m < n) {
			min = m;
		}
		else {
			min = n;
		}

		for (int i = 1; i <= min; i++) {
			if (m % i == 0 && n % i == 0) {
				ucln = i;
			}
		}
		cout << "Uoc chung lon nhat cua " << m << " va " << n << " la " << ucln << endl;
	}
	return ucln;
}
int TimBCNN(int m, int n)
{
	int i, min, max, bcnn;
	if (m == 0 || n == 0) {
		cout << m << " va " << n << " khong co boi chung nho nhat" << endl;
	}
	else {
		if (m > n) {
			max = m;
		}
		else {
			max = n;
		}

		int i = max;

		while (1)
		{
			if (i % m == 0 && i % n == 0)
			{
				bcnn = i;
				break;
			}
			i += max;
		}
		cout << "Boi chung nho nhat cua " << m << " va " << n << " la " << bcnn << endl;
	}
	return bcnn;
}

