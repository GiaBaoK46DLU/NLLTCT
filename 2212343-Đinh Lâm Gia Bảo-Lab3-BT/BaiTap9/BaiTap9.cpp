#include <iostream>
#include<conio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>


using namespace std;
void Thongbao(int k);
void Xuly(int So);

int Sinh()
{
	srand((unsigned int)time(NULL));
	int res = rand() % 20;
	return res;
}
void Thongbao(int k)
{
	if (k == 0) cout << "\nBan doan sai roi , Ban nen thu lai voi so khac !";
	else cout << "\nBan doan dung roi ! ❤ ";
	return;
}
int luachonmuchoi()
{
	int cnt;
	cout << "Vui long lua chon muc choi "; cin >> cnt;
	return cnt;
}
void Xuly(int So)
{

	int n, cnt = luachonmuchoi();

	do
	{
		cout << "Ban co " << cnt << " lan de doan so may man" << endl;
		cout << "Vui long nhap so may man cua ban tu 0 -> 19 ";
		cin >> n;
		if (n == So) {
			Thongbao(1);
			return;
		}
		else
		{
			Thongbao(0);
			cout << "\n";
		}
		cnt--;

	} while (cnt != 0);

}

int main()
{
	cout << "Chao mung ban da den tro choi may man " << endl;
	int So = Sinh();
	Xuly(So);
	cout << "\nSo may man cua chung toi la " << So;
	_getch();
	return 0;
}