#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float table[5] = {};
    for (int i = 0; i < 5; i++) {
        cin >> table[i];
    }

    for (int lengthTable = 0; lengthTable < 5; lengthTable++) {

        for (int a = 2; a < 5; a++) {
            float result = pow(table[lengthTable] , a);
            cout <<result<<" ";
        }
    }
    return 0;
}