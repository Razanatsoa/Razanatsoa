#include <iostream>
#include <string>

using namespace std;

void Swap(float &X, float &Y) {
    float temp = X;
    X = Y;
    Y = temp;
}

int main() {
    float table[4] = {};
    for (int i = 0; i < 4; i++) {
        cin >> table[i];
    }

    Swap(table[0], table[1]);
    Swap(table[2], table[3]);
    Swap(table[1], table[2]);

    std::cout << std::endl;
    std::cout << table[0] << std::endl;
    std::cout << table[1] << std::endl;
    std::cout << table[2] << std::endl;
    std::cout << table[3] << std::endl;
    return 0;
}