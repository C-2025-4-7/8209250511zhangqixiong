//include<iostream>						没有#  
//using namespace std;
//int Main()							main大写
//{
//	int i = k + 1;						k没有定义
//	cout << i++ << endl;
//	int i = 1;							i重复定义
//	cout << i++ << endl;
//	cout << ”Welcome to C++!<< endl;   奇奇怪怪的字符串，引号没打全，还用的是中文引号
//	return 0							没有“；”
//}
//这上面的便是错误代码
#include <iostream>
using namespace std;
int main()
{
	const int M = 10;
	int i = M + 1;
	cout << i++ << endl;
	i = 1;
	cout << i++ << endl;
	cout << "Welcome to C++!" << endl;
	return 0;
}