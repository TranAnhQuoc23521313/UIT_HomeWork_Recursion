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

float CuoiCung(float a[], int n)
{
	if (n == 0) return 0;
	float lc = CuoiCung(a, n - 1);
	if (lc!=0) 	return lc;
	if (a[n - 1] > 2003) return a[n - 1];
	return 0;
}

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << CuoiCung(a, n);
	return 0;
}