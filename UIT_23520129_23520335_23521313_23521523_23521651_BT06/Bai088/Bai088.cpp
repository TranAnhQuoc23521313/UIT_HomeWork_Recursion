#include<iostream>
#include<iomanip>
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
int TongGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = TongGiaTri(a, n - 1);
	if (abs(a[n - 1]) / 10 % 10 == 5)
		s = s + a[n - 1];
	return s;
}
int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << TongGiaTri(a, n);
	return 0;
}