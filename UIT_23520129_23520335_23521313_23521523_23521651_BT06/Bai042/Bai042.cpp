#include <iostream>
#include<cmath>
using namespace std;

float ktToanChan(int n)
{
	n = abs(n);
	if (n <= 9)
	{
		if (n % 2 != 0)
			return 1;
		return 0;
	}
	int dv = n % 10;
	if (dv % 2 != 0) return 1;
	return ktToanChan(n/10);
}
int main()
{
	int n;
	cin >> n;
	if (ktToanChan(n) == 0) cout << "Toan chan";
	else cout << "Khong toan chan";
	return 0;
}
