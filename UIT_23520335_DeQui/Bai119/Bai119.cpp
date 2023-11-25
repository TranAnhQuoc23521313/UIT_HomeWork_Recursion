#include<cmath>
#include<iostream>
#include<iomanip>

using namespace std;

void Nhap(int a[], int& n);
bool ktNguyenTo(int n);
int NguyenToDau(int a[], int n);

int main()
{
	int n;
	int a[1000];

	Nhap(a, n);
	cout << NguyenToDau(a, n);
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

bool ktNguyenTo(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}


int NguyenToDau(int a[], int n)
{
	if (n == 0)
		return -1;
	int lc = NguyenToDau(a, n - 1);
	if (lc != -1)
		return lc;
	if (ktNguyenTo(a[n - 1]))
		return a[n - 1];
	return -1;
}
