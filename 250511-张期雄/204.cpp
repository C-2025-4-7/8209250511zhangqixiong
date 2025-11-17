#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    cin >> num1 >> op >> num2;
    switch (op) {
    case '+':
        cout << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0) {
            cout << "除数不能为0" << endl;
        }
        else {
            cout << num1 / num2 << endl;
        }
        break;
    case '%':
        // 取模运算要求操作数为整数，这里做类型转换
        int n1 = (int)num1, n2 = (int)num2;
        if (n2 == 0) {
            cout << "除数不能为0" << endl;
        }
        else {
            cout << n1 % n2 << endl;
        }
        break;
    default:
        cout << "运算符非法" << endl;
    }
    return 0;
}