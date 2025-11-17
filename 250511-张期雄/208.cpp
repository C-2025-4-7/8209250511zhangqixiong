#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, xn, xn1;
    cout << "请输入a：";
    cin >> a;

    if (a < 0) {
        cout << "负数没有实数平方根" << endl;
        return 0;
    }

    xn = a; // 初始值设为a
    do {
        xn1 = 0.5 * (xn + a / xn);
        if (fabs(xn1 - xn) < 1e-5) { // 判断精度是否满足
            break;
        }
        xn = xn1;
    } while (true);

    cout << "平方根为：" << xn1 << endl;

    // 思考(2)：尝试更小区间
    xn = a;
    do {
        xn1 = 0.5 * (xn + a / xn);
        if (fabs(xn1 - xn) < 1e-10) {
            break;
        }
        xn = xn1;
    } while (true);
    cout << "精确到1e-10的平方根为：" << xn1 << endl;
    cout << "可以做到，因为浮点数的精度支持更小的误差判断" << endl;

    return 0;
}