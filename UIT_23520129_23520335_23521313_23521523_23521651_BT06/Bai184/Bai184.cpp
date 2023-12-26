#include<cmath>
#include<iostream>
#include<iomanip>

using namespace std;

void Nhap(int a[], int& n);
int DemPhanBiet(int a[], int n);

int main()
{
	int n;
	int a[1000];

	Nhap(a, n);
	cout << DemPhanBiet(a, n);
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

int DemPhanBiet(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	int dem = DemPhanBiet(a, n - 1);

	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		if (a[i] == a[n - 1])
			flag = 0;
	if (flag == 1)
		dem++;
	return dem;
}