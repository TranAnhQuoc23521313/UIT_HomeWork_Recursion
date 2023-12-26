#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[][500], int&, int&, int&);
void LietKe(int[][500], int, int, int);
bool KtDang3m(int);

int main()
{
	int m, n, dong;
	int a[500][500];
	Nhap(a, m, n, dong);
	cout << "Ket qua: " << endl;
	LietKe(a, m, n, dong);
	return 0;
}

void Nhap(int a[][500], int& m, int& n,int& dong)
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
	cout << "Nhap Dong: ";
	cin >> dong;
}

bool KtDang3m(int x)
{
	if (x < 1)
		return false;
	int temp = x;
	while (temp > 1)
	{
		int dv = temp % 10;
		if (dv % 3 != 0)
			return false;
		temp /= 10;
	}
	return true;
}

void LietKe(int a[][500], int m, int n, int dong)
{
	if (n == 0)
		return;
	LietKe(a, m, n - 1, dong);
	if (KtDang3m(a[dong][n - 1]))
		cout << setw(4) << a[dong][n - 1];
}