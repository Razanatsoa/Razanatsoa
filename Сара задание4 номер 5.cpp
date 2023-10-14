
#include <iostream>
//#include <string>
using namespace std;

int main() {
    int a;
    cout << "Enter a number " << endl;
    cin >> a;
    int b;
    for (int i = 0; i <= a; i++) {
        b += i;
    }
    cout << b << endl;

    return 0;
}