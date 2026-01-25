#include <iostream>
using namespace std;

class RectangularPrism {
private:
    double length;
    double width;
    double height;

public:
    // 成员函数：输入长、宽、高
    void inputDimensions() {
        cout << "请输入长方柱的长、宽、高：";
        cin >> length >> width >> height;
    }

    // 成员函数：计算体积
    double calculateVolume() const {
        return length * width * height;
    }
};

int main() {
    const int prismCount = 3;
    RectangularPrism prisms[prismCount];

    // 输入每个长方柱的尺寸
    for (int i = 0; i < prismCount; ++i) {
        cout << "输入第 " << i + 1 << " 个长方柱的尺寸：" << endl;
        prisms[i].inputDimensions();
    }

    // 输出每个长方柱的体积
    for (int i = 0; i < prismCount; ++i) {
        cout << "第 " << i + 1 << " 个长方柱的体积为："
            << prisms[i].calculateVolume() << endl;
    }

    return 0;
}
