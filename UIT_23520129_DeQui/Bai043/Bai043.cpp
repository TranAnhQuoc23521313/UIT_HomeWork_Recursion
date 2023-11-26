#include <iostream>
using namespace std;
int ktTang(int n)
{
	n = abs(n);
	if (n <= 9)
		return 1;
	int dv = n % 10;
	int hc = (n / 10) % 10;
	if (ktTang(n / 10) && hc <= dv)
		return 1;
	return 0;
}
int main()
{
	int n;
	cin >> n;
	cout << ktTang(n);
	return 0;
}