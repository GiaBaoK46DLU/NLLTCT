#include <iostream>
#include <math.h>
using namespace std;

double WindChill(double t, double v);
int main()
{
	double t, v, z;
	cout << "nhiet do (t) (-50 <= t <= 50) : ";
	cin >> t;
	cout << "van toc gio (v) (3 <= v <= 120) : ";
	cin >> v;
	z = WindChill(t, v);
	cout << "do lanh cua gio la: " << z << endl;
	return 0;
}
double WindChill(double t, double v)
{
	double w;
	w = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * v * 0.16;
	return w;
}