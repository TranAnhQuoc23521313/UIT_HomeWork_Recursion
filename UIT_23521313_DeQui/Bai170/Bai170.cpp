#include <iostream>

using namespace std;

void Nhap(float[], int&);
int DemConTang(float[], int);
int MangConTang(float[], int, int);

int main()
{
	int n;
	float a[1000];
	Nhap(a, n);
	cout << "Ket qua: " << DemConTang(a, n);
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

int DemConTang(float a[], int n)
{
	return MangConTang(a, 0, n);
}

int MangConTang(float a[], int x, int n)
{
	if (x >= n - 1)
		return 0;
	int dem = 0;
	int j = x;
	while (j <= n - 1 && a[j] < a[j + 1])
	{
		dem++;
		j++;
	}
	return (dem + MangConTang(a, x + 1, n));
}