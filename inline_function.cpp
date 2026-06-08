#include <iostream>
using namespace std;

inline int multiply(int a, int b) {
    return a * b;
}

int main() {
    int x = 5, y = 4;

    int result = multiply(x, y);

    cout << "Multiplication = " << result << endl;

    return 0;
}