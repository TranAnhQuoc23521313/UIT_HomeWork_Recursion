#include<iostream>
#include<iomanip>
using namespace std;

void LietKe(int[], int, int, int);

int main()
{
	int n, a[100], x, y;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Cac gia tri thoa dieu kien la: " << endl;
	LietKe(a, n, x, y);
	return 0;
}


void LietKe(int a[], int n, int x, int y)
{
	if (n == 0)
		return;
	LietKe(a, n - 1, x, y);
	if (a[n - 1] >= x && a[n - 1] <= y && a[n - 1] % 2 == 0)
		cout << setw(6) << a[n - 1];
}