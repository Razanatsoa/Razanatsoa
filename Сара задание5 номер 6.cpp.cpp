#include <iostream>

using namespace std;

void methode(int table[], int a, int b, int w) {
    b = 0;
    a = 0;
    int table1 = table[w];
    while (table1 != 0) {
        a++;
        table1 /= 10;
    }

    int b1;
    while (table[w] != 0) {
        b1 = table[w] % 10;
        b += b1;
        table[w] /= 10;
    }

    cout << a<< " ";
    cout << b << endl;
}

int main() {

    int table[5] = {};
    int a;
    int b;
    for (int i = 0; i < 5; i++) {
        cin >> table[i];
    }
    int w;
    for (w = 0; w < 5; w++) {
        methode(table, a, b, w);
    }
}
