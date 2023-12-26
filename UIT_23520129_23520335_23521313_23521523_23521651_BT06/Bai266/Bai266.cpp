#include<iostream>
#include<iomanip>
using namespace std;

int ktCotTang(float[][100], int, int, int);
void LietKe(float[][100], int, int);

int main()
{
	int m, n;
	float a[100][100];
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
	LietKe(a, m, n);
	return 0;
}

int ktCotTang(float a[][100], int m, int n, int c)
{
	if (m == 1)
		return 1;
	if (a[m - 2][c] <= a[m - 1][c] &&
		ktCotTang(a, m - 1, n, c) == 1)
		return 1;
	return 0;
}
void LietKe(float a[][100], int m, int n)
{
	if (n == 0)
		return;
	LietKe(a, m, n - 1);
	if (ktCotTang(a, m, n, n - 1) == 1)
		cout << setw(4) << (n - 1);
}