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
int ucln(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
		if (a > b)
		a = a - b;
	else
		b = b - a;
	return (a + b);
}
int TimUCLN(int a[], int n)
{
	if (n == 1)
		return a[0];
	int lc = TimUCLN(a, n - 1);
	lc = ucln(lc, a[n - 1]);
	return lc;
}
int main()
{
	int n;
	int a[1000];
	Nhap(a, n);
	cout << TimUCLN(a, n);
	return 0;
}