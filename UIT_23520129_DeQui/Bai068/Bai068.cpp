#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float a[], int& n)
{
	cout << "Nhap N: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap A[" << i << "]: ";
		cin >> a[i];
	}
}
void LietKe(float a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	cout << setw(10) << setprecision(3) << a[n - 1];
}
int main()
{
	int n;
	float a[1000];

	Nhap(a, n);
	LietKe(a, n);
	return 0;
}