#include <iostream>

using namespace std;

void Nhap(float[], int&);
int DemPhanBiet(float[], int);

int main()
{
	int n;
	float a[1000];
	Nhap(a, n);
	cout << "Ket qua: " << DemPhanBiet(a, n);
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

int DemPhanBiet(float a[], int n)
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