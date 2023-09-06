#include <iostream>

using namespace std;

int main() {
    int numbers[] = {5, 4, 3, 2, 1};
    int x[] = {5, 4, 3, 2, 1};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size / 2; i++) {
        int temp = x[i];
        x[i] = x[size - i - 1];
        x[size - i - 1] = temp;
    }

    for (int i = 0; i < size; i++) {
        cout << x[i] << ' ';
    }
    cout << endl;

    return 0;
}

