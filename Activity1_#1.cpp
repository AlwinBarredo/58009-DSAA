#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        int x = numbers[i];
        cout << "Index " << i << " = " << x << endl;
    }

    int sum = 0;
    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        sum += numbers[i];
    }

    cout << "The sum is = " << sum << endl;

    return 0;
}
