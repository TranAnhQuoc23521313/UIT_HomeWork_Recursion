#include<iostream>
#include<iomanip>
using namespace std;

int TongGiaTri(int[], int);
int ChuSoDau(int);

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
	cout << "Tong cac phan tu co chu so dau tien le la: " << TongGiaTri(a, n);
	return 0;
}

int ChuSoDau(int a)
{
	int temp;
	while (a > 0)
	{
		temp = a % 10;
		a = a / 10;
	}
	return temp;
}

int TongGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = TongGiaTri(a, n - 1);
	if (ChuSoDau(a[n - 1]) % 2 != 0)
		s = s + a[n - 1];
	return s;
}