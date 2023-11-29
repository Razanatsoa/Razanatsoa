#include <iostream>
#include <vector>

int main() {
    int M, N;
    std::cin >> M;
    std::cin >> N;
    if (M > 0 && N > 0) {
        std::vector<std::vector<double>> maccif(M, std::vector<double>(N));
        for (int i = 0; i < M; ++i) {
            for (int j = 0; j < N; ++j) {
                std::cin >> maccif[i][j];
            }
        }

        int indexMin = 0, indexMax = 0;
        double valeurMini = maccif[0][0], valeurMax = maccif[0][0];

        for (int i = 0; i < M; ++i) {
            for (int j = 0; j < N; ++j) {
                if (maccif[i][j] < valeurMini) {
                    valeurMini = maccif[i][j];
                    indexMin = i;
                }
                if (maccif[i][j] > valeurMax) {
                    valeurMax = maccif[i][j];
                    indexMax = i;
                }
            }
        }

        std::swap(maccif[indexMin], maccif[indexMax]);


        for (int i = 0; i < M; ++i) {
            for (int j = 0; j < N; ++j) {
                std::cout << maccif[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
    return 0;
}