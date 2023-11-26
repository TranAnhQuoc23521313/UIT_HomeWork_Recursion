#include <iostream>
using namespace std;
int GiaiThua(int n)
{
	if (n == 0)
		return 1;
	int T = GiaiThua(n - 1);
	return(T * n);
}
int main()
{
	int n;
	cin >> n;
	cout << GiaiThua(n);
	return 0;
}