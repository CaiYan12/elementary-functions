#include <iostream>
#include <math.h>
using namespace std;
// Variables
double v;
int a = 3;
double e = 2.71828;
// Announce Functions
double origin(double x);
double powerf(double x);
double expf(double x);
double lnf(double x);
double sn(double x);
double cn(double x);
double tn(double x);
double asn(double x);
double acn(double x);
double atn(double x);

int main() {
	cout << "请输入参数：" << endl;
	cin >> v;

	double f = origin(v);
	cout << "f(x) = x, f = " << f << endl;

	double g = powerf(v);
	cout << "g(x) = x^3, g = " << g << endl;

	double h = expf(v);
	cout << "h(x) = e^x, h = " << h << endl;

	double i = lnf(v);
	cout << "i(x) = lnx, i = " << i << endl;

	double s = sn(v);
	cout << "s(x) = sin x, s = " << s << endl;

	double c = cn(v);
	cout << "c(x) = cos x, c = " << c << endl;

	double t = tn(v);
	cout << "t(x) = tan x, t = " << t << endl;

	double as = asn(v);
	cout << "as(x) = arcsin x, as = " << as << endl;

	double ac = acn(v);
	cout << "ac(x) = arccos x, ac = " << ac << endl;

	double at = atn(v);
	cout << "at(x) = arctan x, at = " << at << endl;
	
	system("pause");
	return 0;
}

double origin(double x) {
	return x;
}

double powerf(double x) {
	return pow(x, a);
}

double expf(double x) {
	return pow(e, x);
}

double lnf(double x) {
	return log(x);
}

double sn(double x)
{
	return sin(x);
}

double cn(double x)
{
	return cos(x);
}

double tn(double x)
{
	return tan(x);
}

double asn(double x)
{
	return asin(x);
}

double acn(double x)
{
	return acos(x);
}

double atn(double x)
{
	return atan(x);
}
