#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char operation;
    cin >> num1 >> operation >> num2;
    if (operation == '+') {
        result = num1 + num2;
    }
    else if (operation == '-') {
        result = num1 - num2;
    }
    else if (operation == '*') {
        result = num1 * num2;
    }
    else if (operation == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        }
    }

    cout << result;

    return 0;
}