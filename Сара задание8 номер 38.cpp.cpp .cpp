#include <iostream>
#include <string>
using namespace std;

string methode(string &S, const string &S1, const string &S2) {
    size_t pos = S.find(S1);
    if (pos != std::string::npos) {
        S.replace(pos, S1.length(), S2);
        return S;
    } else {
        return S;
    }
}
int main() {
    std::string S, S1, S2;

    std::getline(std::cin, S);

    std::getline(std::cin, S1);

    std::getline(std::cin, S2);
    string result = methode(S, S1, S2);
    cout << result;
    return 0;
}

