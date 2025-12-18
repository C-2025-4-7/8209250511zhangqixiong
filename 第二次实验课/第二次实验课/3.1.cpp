//求m，n的最大公约数和最小公倍数
#include <iostream>
using namespace std;
int fun(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			a = a - b;
		if (b > a)
			b = b - a;
	}
	return a;
}
int fun2(int a, int b)
{
	fun(a, b);
	return a / fun(a, b) * b;
}
int main() {
	unsigned int m, n;
	cin >> m >> n;
	int max = fun(m, n);
	int min = fun2(m, n);
	cout << m << "和" << n << "的最大公约数是：" << max << endl;
	cout << m << "和" << n << "的最小公倍数是：" << min << endl;
	return 0;
}