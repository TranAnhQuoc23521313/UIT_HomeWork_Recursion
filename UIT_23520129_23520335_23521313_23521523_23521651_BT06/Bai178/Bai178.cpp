#include <iostream>
using namespace std;
void Nhap(int a[], int& n)
{
	cout << "Nhap N: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap A[" << i << "]: ";
		cin >> a[i];
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
}
void DichTrai(int a[], int n)
{
	if (n <= 1)
		return;
	DichTrai(a, n - 1);
	swap(a[n - 2], a[n - 1]);
}
int main()
{
	int n;
	int a[1000];
	Nhap(a, n);
	DichTrai(a, n);
	Xuat(a, n);
	return 0;
}