#include <iostream>
#define pi 3.14159
int main()
{
    double h, r;
    while (true)
    {
        std::cout << "请输入圆柱的高和底面半径（以空格分隔）：";
        std::cin >> h >> r;
        if (h <= 0 || r <= 0)
        {
            std::cout << "你输入的数据错误" << std::endl;
        }
        else
        {
            double volume = pi * r * r * h;
            std::cout << "圆柱的体积是：" << volume << std::endl;
            break;
        }
    }
    return 0;
}
