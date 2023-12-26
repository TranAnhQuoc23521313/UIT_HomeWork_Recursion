#include<cmath>
#include<iostream>
#include<iomanip>

using namespace std;

void Nhap(int a[], int& n);
void NguyenHoa(int a[], int n);
void Xuat(int a[], int n);

int main()
{
	int n;
	int a[1000];

	Nhap(a, n);
	NguyenHoa(a, n);
	Xuat(a, n);
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

void NguyenHoa(int a[], int n)
{
	if (n == 0)
		return;
	NguyenHoa(a, n - 1);
	if (a[n - 1] > 0)
		a[n - 1] = (float)int(a[n - 1] + 0.5);
	else
		a[n - 1] = (float)int(a[n - 1] - 0.5);
}


void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
}