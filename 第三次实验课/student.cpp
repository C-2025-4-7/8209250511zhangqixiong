
#include "student.h"
#include <iostream>
#include <cstring>   
using std::cout;
using std::endl;

Student::Student()
    : num(0), sex('U')           // U = Unknown/未指定
{
    name[0] = '\0';              // 置空字符串
}

Student::Student(int n, const char* nm, char s) {
    set_value(n, nm, s);         // 复用统一的赋值逻辑
}



void Student::set_value(int n, const char* nm, char s) {
    num = n;
    // 为安全起见，限制拷贝长度并手动补 '\0'
    strncpy_s(name, nm ? nm : "", sizeof(name) - 1);
    name[sizeof(name) - 1] = '\0';
    sex = s;
}



void Student::display() const {
    cout << "num:  " << num << endl;
    cout << "name: " << name << endl;
    cout << "sex:  " << sex << endl;
}
