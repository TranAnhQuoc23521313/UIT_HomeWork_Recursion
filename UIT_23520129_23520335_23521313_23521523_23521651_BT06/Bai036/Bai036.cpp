#include <iostream>
using namespace std;

int DemSoLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "So chu so le la: " << DemSoLe(n);
	return 0;
}

int DemSoLe(int n)
{
	n = abs(n); 
	if (n <= 9)
	{ 
		if (n % 2 != 0)
			return 1; 
		return 0;
	}
	int dem = DemSoLe(n / 10);
	int dv = n % 10;
	if (dv % 2 != 0)
		return dem + 1;
	return dem;
}
