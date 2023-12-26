#include<iostream>
#include<iomanip>
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
float TongGiaTri(float a[], int n)
{
	if (n <= 1)
		return 0;
	float s = TongGiaTri(a, n - 1);
	if (a[n - 1] > a[n - 2])
		s = s + a[n - 1];
	return s;
}
int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << TongGiaTri(a, n);
	return 0;
}
