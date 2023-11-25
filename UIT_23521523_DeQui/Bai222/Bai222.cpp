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

int ktDang2m(int a)
{
	for (int i = 0; pow(2, i) <= a; i++)
		if (pow(2, i) == a)
			return 1;
	return 0;
}

int TongCot(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return 0;
	int s = TongCot(a, m - 1, n, c);
	if (ktDang2m(a[m - 1][c]))
		s = s + a[m - 1][c];
	return s;
}

int main()
{
	int a[100][100];
	int m, n, y;
	Nhap(a, m, n);
	cin >> y;
	cout << TongCot(a, m, n, y);
	return 0;
}