#include<cmath>
#include<iostream>
#include<iomanip>

using namespace std;

void Nhap(int a[], int& n);
bool ktChinhPhuong(int n);
void LietKe(int a[], int n);


int main()
{
	int n;
	int a[1000];

	Nhap(a, n);
	LietKe(a, n);
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


bool ktChinhPhuong(int n)
{
	int sqrtN = sqrt(n);
	return (sqrtN * sqrtN == n);
}


void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (ktChinhPhuong(a[n - 1]))
		cout << setw(6) << n - 1;
}