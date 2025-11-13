#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    char pattern[100][100];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            pattern[i][j] = ' ';
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == j) {
                pattern[i][j] = '\\';
            }
            if (i + j == N - 1) {
                pattern[i][j] = '/';
            }
        }
    }

    pattern[N / 2][N / 2] = 'X';

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << pattern[i][j];
        }
        cout << endl;
    }

    return 0;
}
