#include <iostream>

using namespace std;

void Nhap(int[], int&);
void XayDung(int[], int, int[], int&);
void Xuat(int[], int);

int main()
{
	int n;
	int a[1000];
	Nhap(a, n);
	int b[1000];
	int m;
	XayDung(a, n, b, m);
	cout << "\nKet qua: \n";
	Xuat(b, m);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap N: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap A{" << i << "]: ";
		cin >> a[i];
	}
}

void XayDung(int a[], int n, int b[], int& k)
{
	if (n == 0)
	{
		k = 0;
		return;
	}
	XayDung(a, n - 1, b, k);
	if (a[n - 1] % 2 != 0)
		b[k++] = a[n - 1];
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
}