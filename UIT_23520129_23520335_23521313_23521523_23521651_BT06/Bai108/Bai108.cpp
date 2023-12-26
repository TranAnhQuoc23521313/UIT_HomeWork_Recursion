#include <iostream>
using namespace std;
void NhapMang(float a[], int n)
{
	cout << "Nhap cac phan tu cua mang:\n";
	for (int i = 0; i < n; ++i)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}
void TimDoan(float a[], int n, float& x, float& y)
{
	if (n == 1)
	{
		x = a[0];
		y = a[0];
		return;
	}
	TimDoan(a, n - 1, x, y);
	if (a[n - 1] < x)
		x = a[n - 1];
	if (a[n - 1] > y)
		y = a[n - 1];
}
int main()
{
	const int MAX_SIZE = 100;
	float arr[MAX_SIZE];
	int n;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	NhapMang(arr, n);
	float x, y;
	TimDoan(arr, n, x, y);
	cout << "Doan chua tat ca cac gia tri trong mang: [" << x << ", " << y << "]" << endl;
	return 0;
}