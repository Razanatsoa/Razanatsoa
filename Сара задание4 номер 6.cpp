
#include <iostream>
//#include <string>
using namespace std;

int main() {
    int a;
    cout << "Enter a number " << endl;
    cin >> a;
    int b = 1;
    for (int i = 1; i <= a; i++) {
        b  *= i;
    }
    cout << b << endl;

    return 0;
}