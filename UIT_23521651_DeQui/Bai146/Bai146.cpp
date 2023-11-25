#include<iostream>
#include<iomanip>
using namespace std;

int ktChanLe(int[], int);

int main()
{
	int n, a[100];
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu a[" << i << "]: ";
		cin >> a[i];
	}
	if (ktChanLe(a, n) == 1)
		cout << "Mang co tinh chan le";
	else cout << "Mang khong co tinh chan le";
	return 0;
}

int ktChanLe(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 0;
	if (n == 2)
	{
		if ((a[0] + a[1]) % 2 != 0)
			return 1;
		return 0;
	}
	if ((a[n - 1] + a[n - 2]) % 2 != 0)
		if (ktChanLe(a, n - 1) == 1)
			return 1;
	return 0;
}