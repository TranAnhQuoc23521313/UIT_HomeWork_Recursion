#include<iostream>
#include<iomanip>

using namespace std;

int Tong(int);

int main()
{
	int n;
	cout << "Nhap N: ";
	cin >> n;

	cout << "Tong S: " << Tong(n);
	return 0;
}

int Tong(int n)
{
	if (n == 0)
		return 0;
	int s = Tong(n - 1);
	return (s + n * (n + 1) * (n + 2));
}
