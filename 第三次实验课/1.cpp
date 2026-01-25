#include <iostream>
using namespace std;

class Time
{
	private:
		int hour;
		int minute;
		int second;
	public:
		void SetTime(int h, int m, int s)
		{
			if (0 <= h <= 24 && 0 <= m <= 60 && 0 <= s <= 60)
			{
				hour = h, minute = m, second = s;
			}
			else
			{
				cout << "你输入的时间有误" << endl;
			}
		}
		void showTime()
		{
			cout << "H:" << hour << " " << "M:" << minute << " " << "S:" << second << endl;
		}
};


int main()
{
	Time t1;
	int h(0), m(0), s(0);
	cin >> h >> m >> s;
	t1.SetTime(h, m, s);
	t1.showTime();
	return 0;
}