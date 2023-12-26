#include<iostream>
#include<iomanip>
using namespace std;

int DemHoanThien(int[], int);
bool ktHoanThien(int);

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
	cout << "So so hoan thien la: " << DemHoanThien(a, n);
	return 0;
}

int DemHoanThien(int a[], int n)
{
	if (n == 0)
		return 0;
	int dem = DemHoanThien(a, n - 1);
	if (ktHoanThien(a[n - 1]))
		dem++;
	return dem;
}

bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s = s + i;
	if (s == k)
		return true;
	return false;
}