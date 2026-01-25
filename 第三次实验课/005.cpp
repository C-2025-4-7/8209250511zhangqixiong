#include <iostream>

class Point {
private:
    int x, y;

public:
    // 构造函数
    Point(int x0, int y0) : x(x0), y(y0) {}

    // 将坐标改为 (60+i, 80+j)
    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }
    void display() const {
        std::cout << "Point(" << x << ", " << y << ")\n";
    }
};

int main() {
    Point p(60, 80);
    p.display();                

    p.setPoint(4, -10);          // 变为 (64, 70)
    p.display();                 

    p.setPoint(0, 0);            // 变为 (60, 80)
    p.display();

    return 0;
}
