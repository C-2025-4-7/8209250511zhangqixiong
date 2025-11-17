#include <iostream>
using namespace std;
int main()
{
	char ch;
	while (cin >> ch)
	{
		if (ch >= 'a' && ch <= 'z')
			ch = ch - 'a' + 'A';
		else
		{
			cout << (int)ch + 1 << endl;
		}
	}
	return 0;
}