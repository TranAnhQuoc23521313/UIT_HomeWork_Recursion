#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

int DauTien(float a[], int n, float x)
{
	if (n == 1) return 0;
	int lc = DauTien(a, n - 1, x);
	if (abs(a[n - 1] - x) < abs(a[lc] - x))
		lc = n - 1;
	return lc;
}

int main()
{
    float a[100];
	int n;
	Nhap(a, n);
	float x;
	cin >> x;
	cout << DauTien(a, n,x);
	return 0;
}