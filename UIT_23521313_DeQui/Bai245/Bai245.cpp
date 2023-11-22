#include <iostream>

using namespace std;

void Nhap(float[][500], int&, int&);
float AmLonNhat(float[][500], int, int);

int main()
{
	int n, m;
	float a[500][500];
	Nhap(a, m, n);
	cout << "Ket qua: " << AmLonNhat(a, m, n);
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

float AmLonNhat(float a[][500], int m, int n)
{
	if (m == 0)
		return 0;
	float lc = AmLonNhat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m-1][j] < 0)
			if (a[m - 1][j] > lc || lc == 0)
				lc = a[m - 1][j];
	return lc;
}