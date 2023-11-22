#include <iostream>

using namespace std;

void Nhap(int[], int&);
int KtToanChan(int[], int);

int main()
{
	int n;
	int a[1000];
	Nhap(a, n);
	cout << "Ket qua: " << KtToanChan(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap N: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap A{" << i << "]: ";
		cin >> a[i];
	}
}

int KtToanChan(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
	{
		if (a[n - 1] % 2 == 0)
			return 1;
		return 0;
	}
	if (a[n-1]%2==0 && KtToanChan(a,n-1)==1)
		return 1;
	return 0;
}