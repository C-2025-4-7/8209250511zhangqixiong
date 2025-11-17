#include <iostream>
using namespace std;
//保留两位小数
int main()
{
	double c, f;
	cout << "请输入摄氏温度：";
	cin >> c;
	f = 9.0 / 5.0 * c + 32;
	cout << "对应的华氏温度是：" << fixed << f << endl;
	return 0;
}