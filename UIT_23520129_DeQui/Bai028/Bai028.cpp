#include <iostream>
using namespace std;
float Tinh(int n)
{
	if (n == 0)
		return 0;
	return pow((n + Tinh(n - 1)), (float)1 / (n + 1));
}
int main()
{
	int n;
	cin >> n;
	cout << Tinh(n);
	return 0;
}