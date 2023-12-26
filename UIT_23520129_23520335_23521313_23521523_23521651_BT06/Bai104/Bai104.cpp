#include<iostream>
#include<iomanip>

using namespace std;

void Nhap(float a[], int& n);
float NhoNhat(float a[], int n);

int main()
{
	int n;
	float a[1000];

	Nhap(a, n);
	cout << NhoNhat(a, n);
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

float NhoNhat(float a[], int n)
{
	if (n == 1)
		return a[0];
	float lc = NhoNhat(a, n - 1);
	if (a[n - 1] < lc)
		lc = a[n - 1];
	return lc;
}
