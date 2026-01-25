#pragma once
class Student              //类声明
{

public:
    Student();                                  // 默认构造
    Student(int n, const char* nm, char s);     // 带参构造（复用 set_value）

    // 题目要求的成员函数：给数据成员赋初值
    void set_value(int n, const char* nm, char s);

    // 输出成员信息
    void display() const;

private:
	int num;
	char name[20];
	char sex;
};
