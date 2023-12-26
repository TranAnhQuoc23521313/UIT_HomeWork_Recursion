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
int ktNguyenTo(int a)
{
	int s = 0;
	for (int i = 1; i < a; i++)
	{
		if (a % i == 0)
			s += i;
		if (s == a) return 1;
	}
	return 0;
}

void HoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void DuaVeCuoi(int a[], int n)
{
	if (n == 1)
	{
		return;
	}
	for (int i = 0; i <= n - 2; i++)
	{
		if (ktNguyenTo(a[i]) == 1 && ktNguyenTo(a[n - 1]==1) && a[i] < a[n - 1])
			HoanVi(a[i], a[n - 1]);
		DuaVeCuoi(a, n - 1);
	}
}

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	DuaVeCuoi(a, n);
	return 0;
}