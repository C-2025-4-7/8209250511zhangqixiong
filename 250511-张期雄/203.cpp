#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    // 判断能否构成三角形
    if (a + b > c && a + c > b && b + c > a) {
        double perimeter = a + b + c;
        cout << "周长：" << perimeter << endl;
        // 判断是否为等腰三角形
        if (a == b || a == c || b == c) {
            cout << "是等腰三角形" << endl;
        }
        else {
            cout << "不是等腰三角形" << endl;
        }
    }
    else {
        cout << "不能构成三角形" << endl;
    }
    return 0;
}