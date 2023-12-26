#include <iostream>

using namespace std;

void Nhap(float[], int&);
void DuongTangAmGiam(float[], int);
void Xuat(float[], int);

int main()
{
	int n;
	float a[1000];
	Nhap(a, n);
	cout << "Truoc khi sap xep: \n";
	Xuat(a, n);
	DuongTangAmGiam(a, n);
	cout << "\nKet qua: \n";
	Xuat(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap N: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap A{" << i << "]: ";
		cin >> a[i];
	}
}

void DuongTangAmGiam(float a[], int n)
{
	if (n == 0)
		return;
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] > 0 && a[n - 1] > 0 && a[i] > a[n - 1])
			swap(a[i], a[n - 1]);
		if (a[i] < 0 && a[n - 1] < 0 && a[i] < a[n - 1])
			swap(a[i], a[n - 1]);
	}
	DuongTangAmGiam(a, n - 1);
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
}