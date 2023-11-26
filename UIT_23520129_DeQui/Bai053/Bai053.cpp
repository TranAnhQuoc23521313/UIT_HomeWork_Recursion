#include <iostream>
using namespace std;
float Tinh(float x, int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return (1 + x);
	float a = Tinh(x, n - 1);
	float b = Tinh(x, n - 2);
	return ((1 + x) * a - x * b);
}
int main()
{
	float x;
	cin >> x;
	int n;
	cin >> n;
	cout << Tinh(x,n);
	return 0;
}