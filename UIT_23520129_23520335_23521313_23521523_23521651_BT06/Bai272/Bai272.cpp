#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(float a[][100], int& m, int& n)
{
	cin >> m;
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	}
}
void HoanVi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}
void SapCotTang(float a[][100], int m, int n,int c)
{
	if (m == 1)
		return;
	for (int i = 0; i <= m - 2; i++)
		if (a[i][c] > a[m - 1][c])
			HoanVi(a[i][c], a[m - 1][c]);
	SapCotTang(a, m - 1, n, c);
}


int main()
{
	float a[100][100];
	int m, n, k;
	Nhap(a, m, n);
	cin >> k;
	SapCotTang(a, m, n, k);
	return 0;
}