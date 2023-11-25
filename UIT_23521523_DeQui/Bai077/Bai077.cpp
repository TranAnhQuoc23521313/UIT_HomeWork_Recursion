#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
void DemLonNhat(float a[], int n)
{
	if (n == 0) return;
	DemLonNhat(a, n - 1);
	if (a[n - 1] < 0)
		cout << setw(6) << setprecision(3) << a[n - 1];
}
int main() {
	float a[100];
	int n;
	Nhap(a, n);
	DemLonNhat(a, n);
	return 0;
}