#include <iostream>
#include<cmath>
using namespace std;

float ktToanChan(int n)
{
	if (n == 1) return 2;
	float at = ktToanChan(n - 1);
	return (-9 * at-24) / (5 * at + 13);
}
int main()
{
	int n;
	cin >> n;
	cout << ktToanChan(n);
	return 0;
}
