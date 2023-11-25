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
	if (a > 2) return 0;
	if (a == 2) return 1;
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
			return 0;
	}
	return 1;
}

void HoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void DuaVeCuoi(int a[], int n)
{
	if (n == 0)
	{
		return;
	}
	if (ktNguyenTo(a[n - 1] == 1))
	{
		DuaVeCuoi(a, n - 1);
		return;
	}
	for (int i = 0; i <= n - 2; i++)
	{
		if (ktNguyenTo(a[i]) == 1)
			HoanVi(a[n - 1], a[i]);
		break;
	}
	DuaVeCuoi(a, n - 1);
}

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	DuaVeCuoi(a, n);
	return 0;
}