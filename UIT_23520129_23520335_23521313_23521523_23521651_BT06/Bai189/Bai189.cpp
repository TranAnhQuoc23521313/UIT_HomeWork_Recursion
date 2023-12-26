#include<iostream>
using namespace std;

void Nhap(int a[], int& n);
void LietKe(int a[], int n, int i = 0);

int main()
{
	int n;
	int a[1000];

	Nhap(a, n);
	LietKe(a, n);

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void LietKe(int a[], int n, int i)
{
	if (i >= n - 1)
	{
		return;
	}

	if (a[i] % 2 == 0 && ((i > 0 && a[i - 1] % 2 == 0) || (i < n - 1 && a[i + 1] % 2 == 0)))
	{
		cout << a[i] << " ";
	}

	LietKe(a, n, i + 1);
}
