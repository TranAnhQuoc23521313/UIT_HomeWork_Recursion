#include<iostream>
#include<iomanip>
using namespace std;

float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tong la: " << Tong(n);
	return 0;
}

float Tong(int n)
{
	if (n == 0) return 0; float s = Tong(n - 1);
	return (s + (float)n / (n + 1));
}