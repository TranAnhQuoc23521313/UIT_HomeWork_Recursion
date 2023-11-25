#include<iostream>
#include<iomanip>

using namespace std;

float TinhAn(int);

int main()
{
	int n;
	cout << "Nhap N: ";
	cin >> n;

	cout << fixed << setprecision(5) << TinhAn(n);
	return 0;
}

float TinhAn(int n)
{
	if (n == 1)
		return 2;
	float at = TinhAn(n - 1);
	return (at * at + 2) / (2 * at);
}
