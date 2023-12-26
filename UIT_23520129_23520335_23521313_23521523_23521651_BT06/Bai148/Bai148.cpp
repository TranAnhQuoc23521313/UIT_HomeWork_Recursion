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
int ktGiam(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if ((a[n - 2] >= a[n - 1]) && ktGiam(a, n - 1) == 1)
		return 1;
	return 0;	
}
int main()
{
	int n;
	int a[1000];
	Nhap(a, n);
	cout << ktGiam(a, n);
	return 0;
}