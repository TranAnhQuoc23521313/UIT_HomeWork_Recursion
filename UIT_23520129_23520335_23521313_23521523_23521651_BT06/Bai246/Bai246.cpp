#include<iostream>
#include<iomanip>
using namespace std;

int ChanLonNhat(int[][100], int, int);

int main()
{
	int m, n;
	int a[100][100];
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	cout << "So chan lon nhat trong ma tran la: " << ChanLonNhat(a, m, n);

	return 0;
}

int ChanLonNhat(int a[][100], int m, int n)
{
	if (m == 0)
		return -1;
	int lc = ChanLonNhat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] % 2 == 0)
			if (lc == -1 || a[m - 1][j] > lc)
				lc = a[m - 1][j];
	return lc;
}