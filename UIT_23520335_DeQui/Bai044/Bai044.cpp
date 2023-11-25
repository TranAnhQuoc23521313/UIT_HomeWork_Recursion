#include<iostream>
#include<iomanip>

using namespace std;

int ktGiam(int);

int main()
{
	int n;
	cout << "Nhap N: ";
	cin >> n;

	cout << ktGiam(n);
	return 0;
}

int ktGiam(int n)
{
	n = abs(n);
	if (n <= 9)
		return 1;
	int dv = n % 10;
	int hc = (n / 10) % 10;
	if (ktGiam(n / 10) && hc >= dv)
		return 1;
	return 0;
}