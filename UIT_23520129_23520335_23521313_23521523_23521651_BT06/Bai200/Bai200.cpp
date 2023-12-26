#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[][500], int&, int&, int&);
void LietKe(int[][500], int, int, int);
bool KtHoanThien(int);

int main()
{
	int n, m,dong;
	int a[500][500];
	Nhap(a, m, n,dong);
	cout << "Ket qua: \n";
	LietKe(a, m, n, dong);
	return 0;
}

void Nhap(int a[][500], int& m, int& n, int& dong)
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
	cout << "Nhap dong: ";
	cin >> dong;
}

bool KtHoanThien(int x)
{
	int s = 0;
	for (int i = 0; i < x; i++)
		if (x % i == 0)
			s += i;
	return (s == x);
}

void LietKe(int a[][500], int m, int n, int dong)
{
	if (n == 0)
		return;
	LietKe(a, m, n - 1, dong);
	if (KtHoanThien(a[dong][n-1]))
		cout << setw(4) << a[dong][n-1];
}