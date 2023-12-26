#include <iostream>
using namespace std;
void Tower(int n, char a, char b, char c)
{
	if (n == 1)
	{
		cout << "\t" << a << "-----" << c << endl;
		return;
	}
	Tower(n - 1, a, c, b);
	Tower(1, a, b, c);
	Tower(n - 1, b, a, c);
}
int main() {
	int n;
	cout << "Nhap so dia: ";
	cin >> n;
	Tower(n, 'A', 'B', 'C');
	return 0;
}
