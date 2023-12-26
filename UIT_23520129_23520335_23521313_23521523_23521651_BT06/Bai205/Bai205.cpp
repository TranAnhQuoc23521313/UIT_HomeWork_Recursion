#include <iostream>

using namespace std;

void Nhap(int[][500], int&, int&);
int TichLe(int[][500], int, int);

int main()
{
	int m, n;
	int a[500][500];
	Nhap(a, m, n);
	cout << "Ket qua: " << TichLe(a, m, n);
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
{
	cout << "Nhap M: ";
	cin >> m;
	cout << "Nhap N: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap A[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
}

int TichLe(int a[][500], int m, int n)
{
	if (m == 0)
		return 1;
	int t = TichLe(a, m - 1, n);
	if ((m - 1) % 2 == 0)
	{
		for (int j = 0; j < n; j++)
			if (a[m - 1][j] % 2 != 0)
				t *= a[m - 1][j];
	}
	return t;
}