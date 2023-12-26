#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(int a[][100], int& m, int& n)
{
	cin >> m;
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	}
}


int ktDoiXung(int a)
{
	if (a <= 10) return 0;
	int t = abs(a);
	int s = 0;
	while (t != 0)
	{
		int dv = t % 10;
		s = s * 10 + dv;
		t = t / 10;
	}
	if (s == abs(a))
		return 1;
	return 0;
}

void LietKe(int a[][100], int m, int n,int c)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n,c);
	if (ktDoiXung(a[m - 1][c]) == 1)
		cout << setw(4) << a[m - 1][c];
}


int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	for(int i=0;i<n;i++)
		LietKe(a, m, n,i);
	return 0;
}