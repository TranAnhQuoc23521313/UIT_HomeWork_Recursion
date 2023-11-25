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

void XayDung(float a[][100], int m, int n,float b[][100], int& k, int& l)
{
	if (m == 0)
	{
		k = 0;
		l = n;
		return;
	}
	XayDung(a, m - 1, n, b, k, l);
	for (int j = 0; j < l; j++)
		b[m - 1][j] = abs(a[m - 1][j]);
	k++;
}




int main()
{
	float a[100][100],b[100][100];
	int m, n, k, l;
	Nhap(a, m, n);
	XayDung(a, m, n,b,k,l);
	return 0;
}