#include<iostream>
#include<iomanip>
using namespace std;

float DuongCuoi(float[], int);

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
	cout << "So duong cuoi cung trong mang la: " << DuongCuoi(a, n);
	return 0;
}


float DuongCuoi(float a[], int n)
{
	if (n == 0)
		return -1;
	if (a[n - 1] > 0)
		return a[n - 1];
	return DuongCuoi(a, n - 1);
}