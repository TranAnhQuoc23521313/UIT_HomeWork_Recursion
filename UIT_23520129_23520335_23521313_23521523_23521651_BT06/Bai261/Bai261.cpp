#include<iostream>
#include<iomanip>
using namespace std;

int ktDong1(float [][100],int,int,int);
int ktDong2(float[][100], int, int, int);
int ktDong3(float[][100], int, int, int);
void LietKe(float [][100],int,int);

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

int ktDong1(float a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	if (a[d][n - 1] < 0)
		return 1;
	return ktDong1(a, m, n - 1, d);
}
int ktDong2(float a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	if (a[d][n - 1] > 0)
		return 1;
	return ktDong2(a, m, n - 1, d);
}
int ktDong3(float a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	if (a[d][n - 1] == 0)
		return 1;
	return ktDong3(a, m, n - 1, d);
}

void LietKe(float a[][100], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	if (ktDong1(a, m, n, m - 1) == 1 && ktDong2(a, m, n, m - 1) == 1 && ktDong3(a, m, n, m - 1) == 1)
		cout << setw(4) << (m - 1);
}