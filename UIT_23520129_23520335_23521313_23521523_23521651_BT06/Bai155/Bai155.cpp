#include <iostream>

using namespace std;

void Nhap(int[], int&);
void ViTriLeTang(int[], int);
void Xuat(int[], int);

int main()
{
	int n;
	int a[1000];
	Nhap(a, n);
	cout << "Truoc khi sap xep: \n";
	Xuat(a, n);
	ViTriLeTang(a, n);
	cout << "\nKet qua: \n";
	Xuat(a, n);
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

void ViTriLeTang(int a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i < n - 1; i++)
		if (i % 2 != 0 && a[i] > a[n - 1])
			swap(a[i], a[n-1]);
	ViTriLeTang(a, n - 1);
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
}