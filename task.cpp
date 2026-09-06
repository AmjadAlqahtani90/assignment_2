// C++: Calculate total and average

#include <iostream>
using namespace std;

int main() {

    int numbers[] = {10, 20, 30, 40, 50};

    int total = 0;

    for (int i = 0; i < 5; i++) {
        total += numbers[i];
    }

    double average = total / 5.0;

    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;

    return 0;
}