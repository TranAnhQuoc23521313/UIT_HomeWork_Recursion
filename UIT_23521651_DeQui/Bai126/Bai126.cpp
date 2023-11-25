#include<iostream>
#include<iomanip>
using namespace std;

int ViTriDau(int[], int);

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
	cout << "Vi tri cua gia tri chan dau tien la: " << ViTriDau(a, n);
	return 0;
}

int ViTriDau(int a[], int n)
{
	if (n == 0)
		return -1;
	int lc = ViTriDau(a, n - 1);
	if (lc != -1)
		return lc;
	if (a[n - 1] % 2 == 0)
		return n - 1;
	return -1;
}