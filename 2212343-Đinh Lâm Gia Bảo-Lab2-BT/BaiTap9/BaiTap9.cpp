#include <iostream>
#include <math.h>
using namespace std;

double TimMax(double x, double y);
double TimMax4(double a, double b, double c, double d);
int main()
{
	double a, b, c, d, m;
	cout << "so a la: ";
	cin >> a;
	cout << "so b la: ";
	cin >> b;
	cout << "so c la: ";
	cin >> c;
	cout << "so d la: ";
	cin >> d;
	m = TimMax4(a, b, c, d);
	cout << "Max cua 4 so la: " << m << endl;
	return 0;
}
double TimMax(double x, double y)
{
	double max;
	max = (x >= y) ? x : y;
	return max;
}
double TimMax4(double a, double b, double c, double d)
{
	double g;
	g = TimMax(TimMax(a, b), TimMax(c, d));
	return g;
}