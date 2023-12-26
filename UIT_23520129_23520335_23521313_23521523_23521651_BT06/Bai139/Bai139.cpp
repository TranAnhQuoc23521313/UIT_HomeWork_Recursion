#include<cmath>
#include<iostream>
#include<iomanip>

using namespace std;

void Nhap(int a[], int& n);
int gcd(int a, int b);
int bcnn(int a, int b);
int TimBCNN(int a[], int n);

int main()
{
	int n;
	int a[1000];

	Nhap(a, n);
	cout << TimBCNN(a, n);
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

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int bcnn(int a, int b)
{
	return (a * b) / gcd(a, b);
}


int TimBCNN(int a[], int n)
{
	if (n == 1)
		return a[0];
	int lc = TimBCNN(a, n - 1);
	lc = bcnn(lc, a[n - 1]);
	return lc;
}