#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

float LonNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 1; i < n; i++)
	{
		if (lc < a[i]) lc = a[i];
	}
	return lc;
}

void DemLonNhat(float a[], int n)
{
	if (n == 0) return;
	float lc = LonNhat(a, n - 1);
	if (lc < a[n - 1])
	{
		cout << setw(6) << n - 1;
		return;
	}
	if (lc == a[n - 1])
		cout << setw(6) << n - 1;
	DemLonNhat(a, n - 1);
}
int main() {
	float a[100];
	int n;
	Nhap(a, n);
	DemLonNhat(a, n);
	return 0;
}