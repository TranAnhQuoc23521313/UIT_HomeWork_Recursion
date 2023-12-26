#include <iostream>

using namespace std;

void Nhap(int[], int&);
int DemXuatHien(int[], int, int[], int);
int TanSuat(int[], int, int);

int main()
{
	int n, k;
	int a[1000], b[1000];
	cout << "Nhap mang A: \n";
	Nhap(a, n);
	cout << "\nNhap mang B: \n";
	Nhap(b, k);
	cout << "Ket qua: " << DemXuatHien(a, n, b, k);
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

int TanSo(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

int DemXuatHien(int a[], int n, int b[], int k)
{
	if (n == 1)
	{
		if (TanSuat(b, k, a[0]) >= 1)
			return 1;
		return 0;
	}
	int dem = DemXuatHien(a, n - 1, b, k);

}