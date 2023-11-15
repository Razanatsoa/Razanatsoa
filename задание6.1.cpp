#include<iostream>

using namespace std;

int main() {
    int  N;
    cin >> N;
    if (N > 0)
    {
        int Ns [N];
        int j = 0;
        int i = 1;
        while (j < N)
        {
            if (i % 2 != 0)
            {
                Ns [j] = i;
                cout << Ns [j] << " ";
                j++;
                i = i + 2;
            }
        }
    }
    return 0;
}