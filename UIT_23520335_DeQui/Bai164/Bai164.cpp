#include<iostream>
using namespace std;

void Nhap(float a[], int& n);
void Xuat(float a[], int n);
void ThemBaoToan(float a[], int& n, float x);

int main()
{
	int n;
	float a[1000];
	float x;

	Nhap(a, n);
	cout << "Nhap x: ";
	cin >> x;
	ThemBaoToan(a, n, x);
	Xuat(a, n);

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void ThemBaoToan(float a[], int& n, float x)
{
	if (n == 0)
	{
		a[0] = x;
		n++;
		return;
	}
	if (x >= a[n - 1])
	{
		a[n] = x;
		n++;
		return;
	}
	a[n] = a[n - 1];
	n--;
	ThemBaoToan(a, n, x);
	n++;
}
