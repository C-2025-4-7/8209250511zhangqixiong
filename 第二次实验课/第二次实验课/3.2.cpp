#include <iostream>
using namespace std;
bool isPrime(int n)
{
	if (n < 2)
		return 0;
	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int s[100] = { 0 };
	//首先来执行第一个功能：判断素数
	unsigned int t = 0;
	cout << "请输入一个数字：";
	cin >> t;
	if (isPrime(t))
	{
		cout << t << "是一个素数" << endl;
	}
	else
	{
		cout << t << "不是一个素数" << endl;
	}
	//下面是第二个内容，求出0-200的素数
	int temp = 0;
	for (int i = 0; i <= 200; i++)
	{
		if (isPrime(i))
		{
			s[temp] = i;
			temp++;
		}
	}
	for (int i = 0; i < temp; i++)
	{
		cout << s[i] << "\t";
		if ((i + 1) % 10 == 0)
		{
			cout << "\n";
		}
	}
	return 0;
}