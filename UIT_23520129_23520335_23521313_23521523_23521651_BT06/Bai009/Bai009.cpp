#include<iostream>
#include<iomanip>

using namespace std;

long double LuyThua(double, int);

int main()
{
	double x;
	cin >> x;
	int n;
	cin >> n;

	cout << "Luy Thua: " << fixed << setprecision(5) << LuyThua(x, n);
	return 0;
}

long double LuyThua(double x, int n)
{
	if (n == 0)
		return 1;
	float T = LuyThua(x, n - 1);
	return (T * x);
}