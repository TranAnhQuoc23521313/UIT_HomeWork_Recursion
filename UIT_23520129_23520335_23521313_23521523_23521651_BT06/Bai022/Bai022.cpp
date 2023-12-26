#include <iostream>
#include<cmath>
using namespace std;

float Tinh(int n)
{
	n = abs(n);
	if (n == 0) return 0;
	int s = Tinh(n / 10);
	int dv = n % 10;
	return s + dv;
}
int main()
{
	int n;
	cin >> n;
	cout << Tinh(n);
	return 0;
}
