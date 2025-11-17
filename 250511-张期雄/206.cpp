#include <iostream>
using namespace std;

int main() {
    int rows = 5; // 图形的行数
    for (int i = 1; i <= rows; i++) {
        // 输出前导空格
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // 输出*
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}