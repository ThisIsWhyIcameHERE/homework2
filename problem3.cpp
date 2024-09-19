#include <iostream>
using namespace std;

int main() {
    char sex;
    float height;
    cin >> sex;
    cin >> height;

    if (sex == 'M' ) {
        if (height < 1.70)
            cout << "Short";
        else if (height < 1.85)
            cout << "Normal";
        else
            cout << "Tall";
    }
    else if (sex == 'F' ) {
        if (height < 1.60)
            cout << "Short";
        else if (height < 1.75)
            cout << "Normal";
        else
            cout << "Tall";
    }


    return 0;
}
