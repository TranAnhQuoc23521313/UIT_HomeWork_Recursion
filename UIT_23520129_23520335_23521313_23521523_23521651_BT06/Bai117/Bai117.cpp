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
	if (n == 0) return -1;
	if (a[n - 1]<0 && a[n - 1]>-1) 	return a[n - 1];
	return CuoiCung(a, n - 1);
}

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << CuoiCung(a, n);
	return 0;
}