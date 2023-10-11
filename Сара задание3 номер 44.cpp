#include <iostream>
using namespace std;

int main() {
    char x;
    cout << "Enter a letter" << endl;
    cin >> x;
    switch (x) {
        case 'A':
            cout << 95 << 96 << 97 << 98 << 99 << 100 << endl;
            break;
        case 'B':
            cout << 86 << 87 << 88 << 89 << 90 << 91 << 92 << 93 << 94 << endl;
            break;
        case 'C':
            cout << 69 << 70 << 71 << 72 << 73 << 74 << 75 << 76 << 77 << 78 << 79 << 80 << 81 << 82 << 83 << 84 << 85
                 << endl;
            break;
        default:
            cout <<"letter invalid"<<endl;
    }
    return 0;
}

