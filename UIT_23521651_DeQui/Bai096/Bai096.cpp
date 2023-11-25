#include<iostream>
#include<iomanip>
using namespace std;

int DemGiaTri(int[], int);

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
	cout << "So gia tri duong chia het cho 7 la: " << DemGiaTri(a, n);
	return 0;
}

int DemGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int dem = DemGiaTri(a, n - 1);
	if (a[n - 1] > 0 && a[n - 1] % 7 == 0)
		dem++;
	return dem;
}