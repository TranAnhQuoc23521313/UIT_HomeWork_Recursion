#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[], int&);
void XuatCon(int[], int, int, int);
void XuatCon(int[], int, int);
void XuatCon(int[], int);

int main()
{
	int n;
	int a[1000];
	Nhap(a, n);
	cout << "Cac mamg con cua mang A: \n";
	XuatCon(a, n);
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

void XuatCon(int a[], int n, int vt, int l)
{
	if (l == 0)
		return;
	XuatCon(a, n, vt, l - 1);
	cout << setw(4) << a[vt + l - 1];
}

void XuatCon(int a[], int n, int l)
{
	if (n < l)
		return;
	XuatCon(a, n - 1, l);
	XuatCon(a, n, n - l, l);
}

void XuatCon(int a[], int n)
{
	if (n == 0)
		return;
	XuatCon(a, n - 1);
	for (int l = 1; l <= n; l++)
	{
		XuatCon(a, n, n - l, l);
		cout << endl;
	}
}