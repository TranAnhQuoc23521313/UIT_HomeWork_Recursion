#include<iostream>
#include<iomanip>
using namespace std;

void XayDung(float[], int, float[], int&);

int main()
{
	float a[100], b[100];
	int n, k;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu a[" << i << "]: ";
		cin >> a[i];
	}
	XayDung(a, n, b, k);
	cout << "Mang B chi chua cac gia tri am: ";
	for (int i = 0; i < k; i++)
	{
		cout << b[i] << " ";
	}
	return 0;
}


void XayDung(float a[], int n, float b[], int& k)
{
	if (n == 0)
	{
		k = 0;
		return;
	}
	XayDung(a, n - 1, b, k);
	if (a[n - 1] < 0)
		b[k++] = a[n - 1];
}