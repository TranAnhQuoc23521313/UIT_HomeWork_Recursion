#include <iostream>

using namespace std;

void Nhap(float[][500], int&, int&);
int KtToanDuong(float[][500], int, int);

int main()
{
	int n, m;
	float a[500][500];
	Nhap(a, m, n);
	cout << "Ket qua: " << KtToanDuong(a, m, n);
	return 0;
}

void Nhap(float a[][500], int& m, int& n)
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

int KtToanDuong(float a[][500], int m, int n)
{
	if (m == 0)
		return 0;
	if (m == 1)
	{
		for (int j = 0; j < n; j++)
			if (a[0][j] <= 0)
				return 0;
		return 1;
	}
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] > 0 && KtToanDuong(a, m - 1, n) == 1)
			return 1;
	return 0;
}