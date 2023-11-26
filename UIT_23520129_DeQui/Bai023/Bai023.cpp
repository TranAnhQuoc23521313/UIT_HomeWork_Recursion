#include <iostream>
using namespace std;
int TichChuSo(int n)
{
	n = abs(n);
	if (n <= 9)
		return n;
	int T = TichChuSo(n / 10);
	int dv = n % 10;
	return T * dv;
}
int main()
{
	int n;
	cin >> n;
	cout << TichChuSo(n);
	return 0;
}