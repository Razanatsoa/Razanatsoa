#include <iostream>
#include <vector>

using namespace std;

int main() {
    int M, N;
    double D;
    std::cin >> M;
    std::cin >> N;
    std::cin >> D;
    if (M > 0 && N > 0) {
        double massif[M][N];
        for (int i = 0; i < N; ++i) {
            std::cin >> massif[0][i];
        }

        for (int i = 1; i < M; ++i) {
            for (int j = 0; j < N; ++j) {
                massif[i][j] = massif[i - 1][j] * D;
            }
        }

        for (int i = 0; i < M; ++i) {
            for (int j = 0; j < N; ++j) {
                std::cout << massif[i][j] << " ";
            }
            std::cout << "\n";
        }
    }
}