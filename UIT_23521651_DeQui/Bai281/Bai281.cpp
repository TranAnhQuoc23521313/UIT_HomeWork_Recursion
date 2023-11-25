#include<iostream>
#include<iomanip>
using namespace std;

void NguyenHoa(float[][100], int, int);

int main()
{
	int m, n;
	float a[100][100];
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
	NguyenHoa(a, m, n);
	cout << "Ma tran sau khi bien doi la: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

void NguyenHoa(float a[][100], int m, int n)
{
	if (m == 0)
		return;
	NguyenHoa(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] > 0)
			a[m - 1][j] = int(a[m - 1][j] + 0.5);
		else
			a[m - 1][j] = int(a[m - 1][j] - 0.5);
}