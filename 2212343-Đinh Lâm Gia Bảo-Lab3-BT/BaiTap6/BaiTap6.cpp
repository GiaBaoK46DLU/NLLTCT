#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
void Find();

int main()
{
	Find();
	_getch();
	return 0;
}
void Find()
{
	int count = 0;
	for (int a = 1; a <= 10; a++)
		for (int b = 1; b <= 10; b++)
			for (int c = 1; c <= 10; c++)
				for (int d = 1; d <= 10; d++)
					for (int e = 1; e <= 10; e++)
						if (3 * a - 2 * b + 4 * c + 5 * d - e == 30)
							cout << ++count << ",a = " << a << " b = " << b << " c = " << c << " d = " << d << " e =" << e << "\n";
	return;
}