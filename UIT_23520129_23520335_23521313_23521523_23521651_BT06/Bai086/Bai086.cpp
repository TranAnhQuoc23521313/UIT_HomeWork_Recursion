#include<iostream>
#include<iomanip>
using namespace std;

float Tong(float[], int);

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
	cout << "Tong cac phan tu trong mang la: " << Tong(a, n);
	return 0;
}


float Tong(float a[], int n)
{
	if (n == 0)
		return 0;
	return Tong(a, n - 1) + a[n - 1];
}