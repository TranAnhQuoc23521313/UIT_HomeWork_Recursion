#include <iostream>
using namespace std;
int Tong(int n)
{
	if (n == 0)
		return 0;
	int s = Tong(n - 1);
	return (s + n * (n + 1));
}
int main()
{
	int n;
	cin >> n;
	cout << Tong(n);
	return 0;
}