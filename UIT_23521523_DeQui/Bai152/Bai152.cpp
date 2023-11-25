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
int ktNguyenTo(int a)
{
	if (a < 2) return 0;
	for (int i = 2; i < a; i++)
		if (a % i == 0) return 0;
	return 1;
}
void HoanThienGiam(int a[], int n,int b[],int& k)
{
	if (n == 0)
	{
		k = 0;
		return;
	}
	HoanThienGiam(a, n - 1, b, k);
	if (ktNguyenTo(a[n - 1])==1) b[k++] = a[n - 1];
}

int main()
{
	int a[100],b[100];
	int n,k;
	Nhap(a, n);
	HoanThienGiam(a, n,b,k);
	return 0;
}