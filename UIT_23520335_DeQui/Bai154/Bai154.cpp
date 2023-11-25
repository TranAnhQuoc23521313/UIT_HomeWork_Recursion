#include<cmath>
#include<iostream>
#include<iomanip>

using namespace std;

void Nhap(int a[], int& n);
void HoanVi(int& a, int& b);
void SapGiam(int a[], int n);
void Xuat(int a[], int n);

int main()
{
	int n;
	int a[1000];

	Nhap(a, n);
	SapGiam(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap N: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap A[" << i << "]: ";
		cin >> a[i];
	}
}

void HoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}


void SapGiam(int a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i <= n - 2; i++)
		if (a[i] < a[n - 1])
			HoanVi(a[i], a[n - 1]);
	SapGiam(a, n - 1);
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
}