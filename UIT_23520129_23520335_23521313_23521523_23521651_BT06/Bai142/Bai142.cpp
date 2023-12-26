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
	if (a[n - 1] % 2 == 0) return 1;
	return XayDung(a, n - 1);
}

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << XayDung(a, n);
	return 0;
}