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
	if (a < 2) return 0;
	int s = 0;
	for (int i = 1; i < a; i++)
	{
		if (a % i == 0) s += i;
	}
	if (s == a) return 1;
	return 0;
}

int XayDung(int a[], int n)
{
	if (n == 0) return -1;
	if (ktNguyenTo(a[n-1]) ==1)	return n-1;
	return XayDung(a,n-1);
}

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << XayDung(a, n);
	return 0;
}