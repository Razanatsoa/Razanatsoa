#include<iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; ++i) {
        if (i <= 1) {
            std::cout << A[i];
        } else if (i <= 3) {
            std::cout << A[N - i + 1];
        } else if (i <= 5) {
            std::cout << A[i - 2];
        } else if (i <= 7) {
            std::cout << A[N - i + 3];
        }
        cout << " ";
    }
    return 0;
}