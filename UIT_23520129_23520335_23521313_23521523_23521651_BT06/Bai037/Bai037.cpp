#include <iostream>
#include<cmath>
using namespace std;

float ktToanChan(int n)
{
	n = abs(n);
	if (n <= 9)
	{
		if (n % 2 == 0)
			return 1;
		return 0;
	}
	int dem = ktToanChan(n / 10);
	int dv = n % 10;
	if (dv % 2 == 0) return dem + 1;
	return dem;
}
int main()
{
	int n;
	cin >> n;
	cout << ktToanChan(n);
	return 0;
}
