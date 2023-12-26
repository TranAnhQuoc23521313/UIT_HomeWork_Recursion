#include<cmath>
#include<iostream>
#include<iomanip>

using namespace std;

void Nhap(float a[], int& n);
float TimX(float a[], int n);

int main()
{
	int n;
	float a[1000];

	Nhap(a, n);
	cout << TimX(a, n);
	return 0;
}

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

float TimX(float a[], int n)
{
	if (n == 1)
		return abs(a[0]);
	float lc = TimX(a, n - 1);
	if (abs(a[n - 1]) > lc)
		lc = abs(a[n - 1]);
	return lc;
}