#include<iostream>
#include<iomanip>
using namespace std;

float AmDau(float[], int);

int main()
{
	float n, a[100];
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "So am dau tien trong mang la: " << AmDau(a, n);
	return 0;
}


float AmDau(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = AmDau(a, n - 1);
	if (lc != 0)
		return lc;
	if (a[n - 1] < 0)
		return a[n - 1];
	return 0;
}