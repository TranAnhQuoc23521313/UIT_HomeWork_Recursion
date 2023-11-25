#include <iostream>
using namespace std;

float Tinh(int n)
{
	if (n == 0) return 1;
	float s = Tinh(n - 1);
	return(s * (1 + (float)1 / (n * n)));
}
int main()
{
	int n;
	cin >> n;
	cout << Tinh(n);
	return 0;
}
