#include<iostream>
#include<iomanip>
using namespace std;
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
float NhoNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] < lc)
			lc = a[i];
	return lc;
}
void LietKe(float a[], int n)
{
	if (n == 0)
		return;
	float lc = NhoNhat(a, n - 1);
	if (lc > a[n - 1])
	{
		cout << setw(6) << n - 1;
		return;
	}
	if (lc == a[n - 1])
		cout << setw(6) << n - 1;
	LietKe(a, n - 1);
}
int main()
{
	int n;
	float a[1000];
	Nhap(a, n);
	LietKe(a, n);
	return 0;
}