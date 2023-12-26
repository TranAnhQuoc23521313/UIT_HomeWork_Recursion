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
int ChuSoDau(int a)
{
	int t = a;
	while (t >= 10) t = t / 10;
	return t;
}

int DemGiaTri(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return 0;
	int dem = DemGiaTri(a, m - 1, n, c);
	if (ChuSoDau(a[m - 1][c]) % 2 != 0)
		dem = dem + 1;
	return dem;
}


int main()
{
	int a[100][100];
	int m, n, x;
	Nhap(a, m, n);
	cin >> x;
	cout << DemGiaTri(a, m, n, x);
	return 0;
}