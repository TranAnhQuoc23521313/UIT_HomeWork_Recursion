#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(int a[][100], int& m, int& n)
{
	cin >> m;
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	}
}

int ktNguyenTo(int a)
{
	if (a > 2) return 0;
	if (a == 2) return 1;
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
			return 0;
	}
	return 1;
}
int TongNguyenTo(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int s = TongNguyenTo(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktNguyenTo(a[m - 1][j]))
			s = s + a[m - 1][j];
	return s;
}

int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << TongNguyenTo(a, m, n);
	return 0;
}