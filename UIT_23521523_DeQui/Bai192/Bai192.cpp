#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int a[][100], int& m,int& n)
{
	cin >> m;
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for(int j=0;j<n;j++)
			cin >> a[i][j];
	}
}

void LietKe(int a[][100], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] % 2 == 0)
			cout << setw(4) << a[m - 1][j];
}

int main()
{
	int a[100][100];
	int m,n;
	Nhap(a,m, n);
	LietKe(a, m, n);
	return 0;
}