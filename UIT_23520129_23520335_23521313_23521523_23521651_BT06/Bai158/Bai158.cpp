#include <iostream>
using namespace std;
void Nhap(float a[], int& n)
{
	cout << "Nhap N: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap A[" << i << "]: ";
		cin >> a[i];
	}
}
void HoanVi(float& a, float& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void DuongTang(float a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i <= n - 2; i++)
		if (a[i] > 0 && a[n - 1] > 0 && a[i] > a[n - 1])
			HoanVi(a[i], a[n - 1]);
	DuongTang(a, n - 1);
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
}
int main()
{
	int n;
	float a[1000];
	Nhap(a, n);
	DuongTang(a, n);
	Xuat(a, n);
	return 0;
}
