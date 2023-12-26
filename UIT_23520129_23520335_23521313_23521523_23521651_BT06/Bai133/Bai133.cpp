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
int ChanNhoNhat(int a[], int n)
{
	if (n == 0)
		return -1;
	int lc = ChanNhoNhat(a, n - 1);
	if (a[n - 1] % 2 != 0)
		return lc;
	if (lc == -1)
		return a[n - 1];
	if (a[n - 1] < lc)
		lc = a[n - 1];
	return lc;
}
int main()
{
	int n;
	int a[1000];
	Nhap(a, n);
	cout << ChanNhoNhat(a, n);
	return 0;
}