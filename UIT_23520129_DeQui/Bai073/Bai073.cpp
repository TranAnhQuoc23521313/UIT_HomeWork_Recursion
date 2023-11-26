#include<iostream>
#include<iomanip>
using namespace std;
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
int ChuSoDau(int n)
{
	n = abs(n);
	if (n <= 9)
		return n;
	return ChuSoDau(n / 10);
}
void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (ChuSoDau(a[n - 1]) % 2 != 0)
		cout << setw(6) << a[n - 1];
}
int main()
{
	int n;
	int a[1000];

	Nhap(a, n);
	LietKe(a, n);
	return 0;
}