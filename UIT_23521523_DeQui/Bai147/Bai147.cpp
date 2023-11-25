#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

int XayDung(int a[], int n)
{
	if (n == 0) return 0;
	if (n==1) return 1;
	if ((a[n - 2] <= a[n - 1]) && XayDung(a, n - 1) == 1) return 1;
	return 0;
}

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << XayDung(a, n);
	return 0;
}