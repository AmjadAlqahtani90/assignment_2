#include <iostream>
using namespace std;

int main() {

    int* numbers = new int[5];

    for (int i = 0; i < 5; i++) {
        numbers[i] = (i + 1) * 10;
    }

    cout << "Numbers:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << endl;
    }

    delete[] numbers;
    numbers = nullptr;

    return 0;
}
