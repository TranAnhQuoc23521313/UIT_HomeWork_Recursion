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
int XayDung(int a[], int n)
{
	if (n == 0) return 0;
	int lc = XayDung(a, n - 1);
	if (lc != 0) 	return lc;
	if (ChuSoDau(a[n - 1]) % 2 == 0) return a[n - 1];
	return 0;
}

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << XayDung(a, n);
	return 0;
}