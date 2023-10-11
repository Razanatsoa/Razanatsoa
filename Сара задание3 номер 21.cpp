#include <iostream>
//#include <string>
using namespace std;

int main() {
    int x;
    cout << "Enter a number between 0 and 9" << endl;
    cin >> x;
    int x1;
    switch (x) {
        case 0:
            x1 = x * x;
            x = x1 % 10;
            cout << x << endl;
            break;
        case 1:
            x1 = x * x;
            x = x1 % 10;
            cout << x << endl;
            break;
        case 2:
            x1 = x * x;
            x = x1 % 10;
            cout << x << endl;
            break;
        case 3:
            x1 = x * x;
            x = x1 % 10;
            cout << x << endl;
            break;
        case 4:
            x1 = x * x;
            x = x1 % 10;
            cout << x << endl;
            break;
        case 5:
            x1 = x * x;
            x = x1 % 10;
            cout << x << endl;
            break;
        case 6:
            x1 = x * x;
            x = x1 % 10;
            cout << x << endl;
            break;
        case 7:
            x1 = x * x;
            x = x1 % 10;
            cout << x << endl;
            break;
        case 8:
            x1 = x * x;
            x = x1 % 10;
            cout << x << endl;
            break;
        case 9:
            x1 = x * x;
            x = x1 % 10;
            cout << x << endl;
            break;
    }
    return 0;
}