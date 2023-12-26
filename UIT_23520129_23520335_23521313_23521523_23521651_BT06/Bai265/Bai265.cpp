#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
int KtDongGiam(float[][500], int, int, int);
void LietKe(float[][500], int, int);

int main()
{
	int n, m;
	float a[500][500];
	Nhap(a, m, n);
	cout << "Ket qua: \n";
	LietKe(a, m, n);
	return 0;
}

void Nhap(float a[][500], int& m, int& n)
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

int KtDongGiam(float a[][500], int m, int n, int dong)
{
	if (n == 1)
		return 1;
	if (a[dong][n - 2] > a[dong][n - 1] && KtDongGiam(a, m, n - 1, dong) == 1)
		return 1;
	return 0;
}

void LietKe(float a[][500], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	if (KtDongGiam(a, m, n, m - 1) == 1)
		cout << setw(4) << m - 1;
}