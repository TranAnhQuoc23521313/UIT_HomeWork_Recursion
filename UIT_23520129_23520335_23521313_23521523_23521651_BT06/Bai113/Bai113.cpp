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
int ChanDau(int a[], int n)
{
	if (n == 0)
		return -1;
	int lc = ChanDau(a, n - 1);
	if (lc != -1)
		return lc;
	if (a[n - 1] % 2 == 0)
		return a[n - 1];
	return -1;
}
int main()
{
	int n;
	int a[1000];
	Nhap(a, n);
	cout << ChanDau(a, n);
	return 0;
}