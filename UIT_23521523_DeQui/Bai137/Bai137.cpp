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

int TanSuat(int a[], int n, int k)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == k) dem++;
	}
	return dem;
}
int XayDung(int a[], int n)
{
	if (n == 1) return a[0];
	int lc = XayDung(a, n - 1);
	if (TanSuat(a, n, a[n - 1]) > TanSuat(a, n, lc))	lc = a[n - 1];
	return lc;
}

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << XayDung(a, n);
	return 0;
}