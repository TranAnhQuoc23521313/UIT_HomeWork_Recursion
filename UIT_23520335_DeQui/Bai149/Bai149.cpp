#include<cmath>
#include<iostream>
#include<iomanip>

using namespace std;

void Nhap(int a[], int& n);
int ktBang(int a[], int n);

int main()
{
	int n;
	int a[1000];

	Nhap(a, n);
	cout << ktBang(a, n);
	return 0;
}

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

int ktBang(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if ((a[n - 2] == a[n - 1]) && ktBang(a, n - 1) == 1)
		return 1;
	return 0;
}