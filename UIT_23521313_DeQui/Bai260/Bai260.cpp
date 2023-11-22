#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void Nhap(int[][500], int&, int&);
int KtDong(int[][500], int, int, int);
void LietKe(int[][500], int, int);
bool KtNguyenTo(int);

int main()
{
	int n, m;
	int a[500][500];
	Nhap(a, m, n);
	cout << "Ket qua: \n";
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

bool KtNguyenTo(int x)
{
	if (x <= 1)
		return false;
	int dem = 0;
	for (int i = 1; i <= x; i++)
		if (x % i == 0)
			dem++;
	return (dem == 2);
}

void LietKe(int a[][500], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	if (KtDong(a, m, n, m - 1) == 1)
		cout << setw(4) << m - 1;
}

int KtDong(int a[][500], int m, int n, int dong)
{
	if (n == 0)
		return 0;
	if (KtNguyenTo(a[dong][n - 1]))
		return 1;
	return KtDong(a, m, n - 1, dong);
}