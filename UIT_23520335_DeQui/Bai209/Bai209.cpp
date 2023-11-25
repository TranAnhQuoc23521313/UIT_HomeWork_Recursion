#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int a[][100], int& m, int& n);
bool ktDang3m(int k);
int Tong3m(int a[][100], int m, int n);

int main()
{
	int m, n;
	int a[100][100];

	Nhap(a, m, n);
	cout << Tong3m;
	return 0;
}

void Nhap(int a[][100], int& m, int& n)
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

bool ktDang3m(int k)
{
	if (k < 1)
		return false;
	while (k > 1)
	{
		if (k % 3 != 0)
			return false;
		k = k / 3;
	}
	return true;
}


int Tong3m(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int s = Tong3m(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktDang3m(a[m - 1][j]))
			s = s + a[m - 1][j];
	return s;
}
