#include<cmath>
#include<iostream>
#include<iomanip>

using namespace std;

void Nhap(int a[], int& n);
bool ktHoanThien(int n);
int ktTinhChat(int a[], int n);

int main()
{
	int n;
	int a[1000];

	Nhap(a, n);
	cout << ktTinhChat(a, n);
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

bool ktHoanThien(int n)
{
	int sum = 0;
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	return sum == n;
}


int ktTinhChat(int a[], int n)
{
	if (n == 0)
		return 1;
	if (ktHoanThien(a[n - 1]) && a[n - 1] > 256)
		return 0;
	return ktTinhChat(a, n - 1);
}