#include <iostream>
using namespace std;
int main()
{
	double x;
	while (cin >> x)
	{
		if (0 < x && x < 1)
			cout << 3 - 2 * x << endl;
		else if (1 <= x && x < 5)
			cout << 2 / (4 * x) + 1 << endl;
		else if (5 <= x && x < 10)
			cout << x * x << endl;
		else
			cout << "error" << endl;
	}
	return 0;
}