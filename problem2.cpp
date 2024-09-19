#include <iostream>
using namespace std;

int main() {
    int winter, rain;
    cin >> winter;
    cin >> rain;

    if (winter == 1)
        cout << "Bus";
    else
        if (rain == 1)
            cout << "Walk";
        else
            cout << "Bike";

    return 0;
}
