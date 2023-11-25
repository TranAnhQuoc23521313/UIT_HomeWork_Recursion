#include<iostream>
#include<iomanip>

using namespace std;

void Nhap(float a[], int& n);
int TimViTri(float a[], int n);

int main()
{
	int n;
	float a[1000];

	Nhap(a, n);
	cout << TimViTri(a, n);
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

int TimViTri(float a[], int n)
{
	if (n == 0)
		return -1;
	int lc = TimViTri(a, n - 1);
	if (a[n - 1] >= 0)
		return lc;
	if (lc == -1)
		return n - 1;
	if (a[n - 1] > a[lc])
		lc = n - 1;
	return lc;
}
