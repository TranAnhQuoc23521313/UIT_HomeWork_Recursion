#include<iostream>
#include<iomanip>
using namespace std;

int ktDongTang(float[][100], int, int, int);

int main()
{
	int m, n, d;
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
	cout << "Nhap hang d: ";
	cin >> d;
	if (ktDongTang(a, m, n, d) == 1)
		cout << "Hang d co tang dan";
	else cout << "Hang d khong tang dan";
	return 0;
}

int ktDongTang(float a[][100], int m, int n, int d)
{
	if (n == 1)
		return 1;
	if (a[d][n - 2] <= a[d][n - 1] &&
		ktDongTang(a, m, n - 1, d) == 1)
		return 1;
	return 0;
}