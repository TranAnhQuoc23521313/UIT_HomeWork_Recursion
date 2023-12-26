#include <iostream>
using namespace std;

int TonTaiChan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (TonTaiChan(n) == 1)
		cout << "So n co ton tai chu so chan";
	else
		cout << "So n khong ton tai chu so chan";
	return 0;
}

int TonTaiChan(int n)
{
	n = abs(n); 
	if (n <= 9) 
	{
		if (n % 2 == 0) 
			return 1;
		return 0; }
	int dv = n % 10;
	if (dv % 2 == 0)
		return 1;
	return TonTaiChan(n / 10);
}