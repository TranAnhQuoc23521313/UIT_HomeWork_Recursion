#include<cmath>
#include<iostream>
#include<iomanip>

using namespace std;

void Nhap(int a[], int& n);
bool ktDoiXung(int n);
int DemDoiXung(int a[], int n);

int main()
{
	int n;
	int a[1000];

	Nhap(a, n);
	cout << DemDoiXung(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap N: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap A[" << i << "]: ";
		cin >> a[i];
	}
}

bool ktDoiXung(int n)
{
	int temp = n;
	int rem, sum = 0;

	while (temp > 0)
	{
		rem = temp % 10;
		sum = (sum * 10) + rem;
		temp = temp / 10;
	}

	if (n == sum)
		return true;
	else
		return false;
}


int DemDoiXung(int a[], int n)
{
	if (n == 0)
		return 0;
	int dem = DemDoiXung(a, n - 1);
	if (ktDoiXung(a[n - 1]))
		dem++;
	return dem;
}