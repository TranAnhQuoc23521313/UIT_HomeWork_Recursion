#include<cmath>
#include<iostream>
#include<iomanip>

using namespace std;

void Nhap(int a[], int& n);
void DichPhai(int a[], int n);
void Xuat(int a[], int n);

int main()
{
	int n;
	int a[1000];

	Nhap(a, n);
	DichPhai(a, n);
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

void DichPhai(int a[], int n)
{
	if (n <= 1)
		return;
	swap(a[n - 2], a[n - 1]);
	DichPhai(a, n - 1);
}


void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
}