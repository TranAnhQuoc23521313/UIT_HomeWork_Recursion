#include<iostream>
#include<iomanip>

using namespace std;

int TongSoChan(int);

int main()
{
	int n;
	cout << "Nhap N: ";
	cin >> n;

	cout << TongSoChan(n);
	return 0;
}

int TongSoChan(int n)
{
	n = abs(n);
	if (n <= 9)
	{
		if (n % 2 != 0)
			return 0;
		return n;
	}
	int s = TongSoChan(n / 10);
	int dv = n % 10;
	if (dv % 2 == 0)
		return s + dv;
	return s;
}
