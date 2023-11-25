#include<iostream>
#include<iomanip>

using namespace std;

void Nhap(float a[], int& n);
float TongGiaTri(float a[], int n);

int main()
{
	int n;
	float a[1000];

	Nhap(a, n);
	cout << TongGiaTri(a, n);
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

float TongGiaTri(float a[], int n)
{
	if (n <= 1)
		return 0;
	float s = TongGiaTri(a, n - 1);
	if (a[n - 2] > abs(a[n - 1]))
		s = s + a[n - 2];
	return s;
}