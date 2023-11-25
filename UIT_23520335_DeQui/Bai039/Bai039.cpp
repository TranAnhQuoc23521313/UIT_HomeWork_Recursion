#include<iostream>
#include<iomanip>

using namespace std;

int ChuSoDau(int);

int main()
{
	int n;
	cout << "Nhap N: ";
	cin >> n;

	cout << "Chu So Dau: " << ChuSoDau(n);
	return 0;
}

int ChuSoDau(int n)
{
	n = abs(n);
	if (n <= 9)
		return n;
	return ChuSoDau(n / 10);
}