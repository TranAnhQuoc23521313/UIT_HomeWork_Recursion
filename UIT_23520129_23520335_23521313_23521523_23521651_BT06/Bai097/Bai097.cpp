#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

int TimViTri(int a[], int n)
{
	if (n == 0) return 0;
	int dem = TimViTri(a, n - 1);
	if (abs(a[n - 1]) % 10 == 5)
		dem++;
	return dem;
}

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << TimViTri(a, n);
	return 0;
}