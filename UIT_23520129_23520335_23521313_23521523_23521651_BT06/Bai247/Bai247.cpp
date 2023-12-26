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

float DuongNhoNhat(float a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	float lc = DuongNhoNhat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] > 0)
			if (lc == 0 || a[m - 1][j] < lc)
				lc = a[m - 1][j];
	return lc;
}

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << DuongNhoNhat(a, m, n);
	return 0;
}