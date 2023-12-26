#include <iostream>
using namespace std;

float Tinh(int n)
{
	if (n == 0) return 0;
	float s = Tinh(n - 1);
	return(s + (float)1 / (n * (n + 1) * (n + 2) * (n + 3)));
}
int main()
{
	int n;
	cin >> n;
	cout << Tinh(n);
	return 0;
}
