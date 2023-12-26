#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
int DemGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 0;
	int dem = DemGiaTri(a, n - 1);
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		if (a[i] >= a[n - 1])
			flag = 0;
	if (flag == 1)
		dem++;
	return dem;
}


int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << DemGiaTri(a, n);
	return 0;
}