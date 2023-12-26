#include<iostream>
#include<iomanip>
using namespace std;

int TimGiaTri(int[], int);
bool ktNguyenTo(int);

int main()
{
	int n, a[100];
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "So nguyen to lon nhat trong mang la: " << TimGiaTri(a, n);
	return 0;
}

int TimGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int lc = TimGiaTri(a, n - 1);
	if (!ktNguyenTo(a[n - 1]))
		return lc;
	if (lc == 0)
		return a[n - 1];
	if (a[n - 1] > lc)
		lc = a[n - 1];
	return lc;
}

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	else
		return false;
}