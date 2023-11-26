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
float LonNhat(float a[], int n)
{
	if (n == 1)
		return a[0];
	float lc = LonNhat(a, n - 1);
	if (a[n - 1] > lc)
		lc = a[n - 1];
	return lc;
}
int main()
{
	int n;
	float a[1000];
	Nhap(a, n);
	cout << LonNhat(a, n);
	return 0;
}