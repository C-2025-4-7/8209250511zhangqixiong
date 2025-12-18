#include <iostream>
using namespace std;

void bubbleSort(double arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    const int SIZE = 10;
    double numbers[SIZE];

    cout << "请输入10个双精度数字：" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> numbers[i];
    }

    bubbleSort(numbers, SIZE);

    cout << "排序后的数字为：" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
