#include <iostream>

using namespace std;

void Nhap(float[][500], int&, int&);
float TongDong(float[][500], int, int, int);
float TongLonNhat(float[][500], int, int);

int main()
{
	int n, m;
	float a[500][500];
	Nhap(a, m, n);
	cout << "Ket qua: " << TongLonNhat(a, m, n);
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

float TongDong(float a[][500], int m, int n, int dong)
{
	if (n == 0)
		return 0;
	return TongDong(a, m - 1, n, dong) + a[dong][n - 1];
}

float TongLonNhat(float a[][500], int m, int n)
{
	if (m == 1)
		return TongDong(a, m, n, 0);
	float lc = TongLonNhat(a, m - 1, n);
	if (lc < TongDong(a, m, n, m - 1))
		lc = TongDong(a, m, n, m - 1);
	return lc;
}