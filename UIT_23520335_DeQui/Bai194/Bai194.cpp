#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int a[][500], int& m, int& n);
bool ktChinhPhuong(int n);
void LietKe(int a[][100], int m, int n);

int main()
{
	int m, n;
	int a[500][500];

	Nhap(a, m, n);
	LietKe(a, m, n);
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
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

bool ktChinhPhuong(int n)
{
	int sqrtN = sqrt(n);
	return (sqrtN * sqrtN == n);
}

void LietKe(int a[][500], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktChinhPhuong(a[m - 1][j]))
			cout << setw(4) << a[m - 1][j];
}