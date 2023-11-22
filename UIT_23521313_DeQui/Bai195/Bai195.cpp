#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[][500], int&, int&);
void LietKe(int[][500], int, int);
bool KtNguyenTo(int);

int main()
{
	int n,m;
	int a[500][500];
	Nhap(a, m,n);
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
	for (int i = 0; i < m;i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap A[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
}

bool KtNguyenTo(int x)
{
	if (x < 1)
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
	for (int j = 0; j < n; j++)
		if (KtNguyenTo(a[m - 1][j]))
			cout << setw(4) << a[m - 1][j];
}