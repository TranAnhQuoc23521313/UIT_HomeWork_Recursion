#include<iostream>
#include<iomanip>
using namespace std;

void LietKe(int[100][100], int, int);
bool ktToanChan(int a);

int main()
{
	int m, n;
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
	cout << "Cac so nguyen toan chu so chan la: ";
	LietKe(a, m, n);
	return 0;
}

void LietKe(int a[100][100], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktToanChan(a[m - 1][j]))
			cout << setw(4) << a[m - 1][j];
}

bool ktToanChan(int a)
{
	int temp;
	while (a > 0)
	{
		temp = a % 10;
		if (temp % 2 != 0)
			return false;
		a = a / 10;
	}
	return true;
}