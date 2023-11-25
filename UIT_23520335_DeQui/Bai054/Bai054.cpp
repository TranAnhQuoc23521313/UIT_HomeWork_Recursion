#include<iostream>
#include<iomanip>

using namespace std;

float Tinh(float x, int n);

int main()
{
	float x;
	cin >> x;
	int n;
	cout << "Nhap N: ";
	cin >> n;

	cout << Tinh(x, n);
	return 0;
}

float Tinh(float x, int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return x * x;
	float a = Tinh(x, n - 1);
	float b = Tinh(x, n - 2);
	return ((1 + x * x) * a - x * x * b);
}