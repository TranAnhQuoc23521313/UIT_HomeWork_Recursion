#include <iostream>
#include <iomanip>
using namespace std;

float Tinh(float, int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float kq = Tinh(x, n);
	cout << "Ket qua: " << kq;
	return 0;
}

float Tinh(float x, int n)
{
	if (n == 0) return x; float s = Tinh(x, n - 1);
	return (s * (x + n));
}