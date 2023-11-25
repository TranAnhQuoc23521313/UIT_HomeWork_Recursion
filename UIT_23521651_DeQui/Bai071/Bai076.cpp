#include<iostream>
#include<iomanip>
using namespace std;

void LietKe(int [], int);
bool ktDang3m(int);

int main()
{
	int n, a[100];
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Cac so am trong mang la: " << endl;
	LietKe(a, n);
	return 0;
}

bool ktDang3m(int a)
{
	while (a > 3)
	{
		if (a % 3 != 0)
			return false;
		a = a / 3;
	}
	return true;
}

void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (ktDang3m(a[n - 1]))
		cout << setw(6) << a[n - 1];
}