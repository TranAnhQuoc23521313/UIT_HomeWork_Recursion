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


float DemLonNhat(float a[], int n)
{
	if (n == 0) return 0;
	float s = DemLonNhat(a, n - 1);
	if ( a[n - 1]>0)
	{
		s += a[n - 1];
	}
	return s;
}

int main() 
{
	float a[100];
	int n;
	Nhap(a, n);
	cout<<DemLonNhat(a, n);
	return 0;
}