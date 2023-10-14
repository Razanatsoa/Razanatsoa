
#include <iostream>
//#include <string>
using namespace std;

int main() {
    int month;
    cout << "Enter a number > 12" << endl;
    cin >> month;
    if (month > 12) {
        switch (month) {
            case 13:
                cout << " January \n";
                break;
            case 14:
                cout << " February \n";
                break;
            case 15:
                cout << " March \n";
                break;
            case 16:
                cout << " April \n";
                break;
            case 17:
                cout << " May \n";
                break;
            case 18:
                cout << " June \n";
                break;
            case 19:
                cout << " July \n";
                break;
            case 20:
                cout << " August \n";
                break;
            case 21:
                cout << " September \n";
                break;
            case 22:
                cout << " October \n";
                break;
            case 23:
                cout << " November \n";
                break;
            case 24:
                cout << " December\n";
                break;
        }
    }
    return 0;
}