#include<iostream>
#include<iomanip>
using namespace std;

void LietKe(int[][100], int, int, int);

int main()
{
	int m, n, c;
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
	cout << "Nhap cot c: ";
	cin >> c;
	cout << "Cac so chan tren cot " << c << " la: ";
	LietKe(a, m, n, c);
	return 0;
}

void LietKe(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n, c);
	if (a[m - 1][c] % 2 == 0)
		cout << setw(4) << a[m - 1][c];
}