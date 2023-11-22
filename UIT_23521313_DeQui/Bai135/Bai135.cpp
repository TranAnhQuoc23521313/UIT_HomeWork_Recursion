#include <iostream>

using namespace std;

void Nhap(int[], int&);
int TimGiaTri(int[], int);
bool KtToanLe(int);

int main()
{
	int n;
	int a[1000];
	Nhap(a, n);
	cout << "Ket qua: " << TimGiaTri(a, n);
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

bool KtToanLe(int x)
{
	int temp = x;
	while (temp != 0)
	{
		if ((temp % 10) % 2 == 0)
			return false;
		temp /= 10;
	}
	return true;
}

int TimGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int lc = TimGiaTri(a, n - 1);
	if (KtToanLe(a[n-1])==false)
		return lc;
	if (lc == 0)
		return a[n - 1];
	if (KtToanLe(a[n - 1]) && lc < a[n - 1])
		lc = a[n - 1];
	return lc;
}