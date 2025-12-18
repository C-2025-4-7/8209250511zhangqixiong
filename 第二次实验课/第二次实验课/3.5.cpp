#include <iostream>
using namespace std;
int peaches(int day)
{
	if (day == 10)
		return 1;
	else
		return (peaches(day + 1) + 1) * 2;
}
int main() {
	int t = peaches(1);
	cout << "第一天共摘了：" << t << "个桃子" << endl;
	return 0;
}