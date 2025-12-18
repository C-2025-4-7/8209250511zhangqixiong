#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int N = 100;
    vector<bool> lockers(N, false); // false 表示关闭，true 表示开启

    for (int student = 1; student <= N; ++student) {
        for (int locker = student; locker <= N; locker += student) {
            lockers[locker - 1] = !lockers[locker - 1]; // 改变状态
        }
    }

    // 输出开启的柜子编号
    for (int i = 0; i < N; ++i) {
        if (lockers[i]) {
            cout << (i + 1) << " ";
        }
    }
    cout << endl;
    return 0;
}
