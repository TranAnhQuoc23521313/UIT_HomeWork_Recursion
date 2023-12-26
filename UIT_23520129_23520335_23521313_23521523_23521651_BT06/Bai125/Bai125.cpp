#include <iostream>

using namespace std;

void Nhap(int[], int&);
int KtHoanThien(int);
int HoanThienCuoi(int[], int);

int main()
{
	int n;
	int a[1000];
	Nhap(a, n);
	cout << "Ket qua: " << HoanThienCuoi(a, n);
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

int KtHoanThien(int x)
{
	int s = 0;
	for (int i = 1; i < x; i++)
		if (x % i == 0)
			s += i;
	if (s == x)
		return 1;
	return 0;
}

int HoanThienCuoi(int a[], int n)
{
	if (n == 0)
		return -1;
	if (KtHoanThien(a[n-1])==1)
		return a[n-1];
	return HoanThienCuoi(a, n - 1);
}