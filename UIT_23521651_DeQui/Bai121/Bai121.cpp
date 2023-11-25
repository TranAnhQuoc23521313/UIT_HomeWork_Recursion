#include<iostream>
#include<iomanip>
using namespace std;

int DoiXungDau(int[], int);

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
	cout << "So doi xung dau trong mang la: " << DoiXungDau(a, n);
	return 0;
}

int DoiXungDau(int a[], int n)
{
	if (n == 0)
		return 10;
	int lc = DoiXungDau(a, n - 1);
	if (lc != 10)
		return lc;
	if (ktDoiXung(a[n - 1]))
		return a[n - 1];
	return 10;
}

bool ktDoiXung(int k)
{
	k = abs(k);
	int dn = 0;
	for (int t = k; t != 0; t = t / 10)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
	}
	if (dn == k)
		return true;
	return false;
}