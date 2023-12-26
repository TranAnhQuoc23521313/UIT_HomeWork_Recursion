#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

int ChuSoDau(int a)
{
	int t = a;
	while (t >= 10)
	{
		t = t / 10;
	}
	return t;
}

int TimViTri(int a[], int n)
{
	if (n == 0) return 0;
	int s = TimViTri(a, n - 1);
	if (ChuSoDau(a[n - 1])%2 == 0)
	{
		s += a[n - 1];
	}
	return s;
}

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << TimViTri(a, n);
	return 0;
}