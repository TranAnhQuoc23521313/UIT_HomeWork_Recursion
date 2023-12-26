#include<iostream>
#include<iomanip>
using namespace std;

void LietKe(float [], int);

int main()
{
	float n, a[100];
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

void LietKe(float a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (a[n - 1] < 0)
		cout << setw(10) << setprecision(3) << a[n - 1];
}