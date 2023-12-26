#include <iostream>
#include<cmath>
using namespace std;

float Tinh(int n)
{
	if (n == 1) return 0;
	return pow((n + Tinh(n - 1)), (float)1 / n);
}
int main()
{
	int n;
	cin >> n;
	cout << Tinh(n);
	return 0;
}
