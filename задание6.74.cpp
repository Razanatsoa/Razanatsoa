#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    if (N > 1) {
        float A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        float max = A[0];
        float min = A[0];
        for (int i = 1; i < N; ++i) {
            if (A[i] > max) {
                max = A[i];
            }
            if (A[i] < min) {
                min = A[i];
            }
        }
        bool betweenMinMax = false;
        for (int i = 0; i < N; ++i) {
            if (A[i] == min || A[i] == max) {
                betweenMinMax = !betweenMinMax;
            } else if (betweenMinMax) {
                A[i] = 0;
            }
        }
        for (int i = 0; i < N; ++i) {
            cout << A[i] << " ";
        }
    }
    return 0;
}