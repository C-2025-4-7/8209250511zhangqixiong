#include <iostream>
using namespace std;

int main() {
    double price = 0.8; // 每个苹果的价格
    int day = 1;
    int count = 2; // 第一天购买的数量
    int totalCount = 0;
    double totalCost = 0;

    while (count <= 100) {
        totalCount += count;
        totalCost += count * price;
        day++;
        count *= 2; // 每天购买量是前一天的2倍
    }

    double averageCost = totalCost / (day - 1); // 天数是day-1，因为最后一次count超过100时未购买
    cout << "每天平均花费：" << averageCost << " 元" << endl;
    return 0;
}