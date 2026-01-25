
#include <iostream>
class Student {
public:
    Student() : num_(0), score_(0.0) {}
    Student(int num, double score) : num_(num), score_(score) {}

    void set_value(int num, double score) { num_ = num; score_ = score; }
    int    num()   const { return num_; }
    double score() const { return score_; }

private:
    int    num_;
    double score_;
};

const Student* max(const Student* s, int n) {
    if (s == nullptr || n <= 0) return nullptr;
    const Student* pmax = s;                 // 当前最高分的元素指针（初始为第 1 个）
    for (int i = 1; i < n; ++i) {
        if ((s + i)->score() > pmax->score()) {
            pmax = s + i;                    // 指针移动到分数更高的元素
        }
    }
    return pmax;
}

int main() {
    // 建立对象数组
    Student stu[5] = {
        Student(1001, 85.5),
        Student(1002, 92.0),
        Student(1003, 88.0),
        Student(1004, 92.0), 
        Student(1005, 76.5)
    };

    const Student* best = max(stu, 5);

    if (best) {
        std::cout << "最高分学号: " << best->num()
            << " ，成绩: " << best->score() << std::endl;
    }
    else {
        std::cout << "数据为空！" << std::endl;
    }

    return 0;
}
