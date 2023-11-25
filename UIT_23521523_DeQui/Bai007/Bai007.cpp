#include <iostream>
using namespace std;

float Tinh(int n)
{
	if (n == 0) return 0.5;
	float s = Tinh(n - 1);
	return (s + (float)(2 * n + 1) / (2 * n + 2));
}
int main()
{
	int n;
	cin >> n;
	cout << Tinh(n);
	return 0;
}
