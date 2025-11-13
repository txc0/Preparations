#include <iostream>
#include <vector>
#include <algorithm> // for sort

using namespace std;

int main() {
    int N;

    cin >> N;

    vector<int> A(N);

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());

    bool hasDuplicate = false;
    for (int i = 0; i < N - 1; ++i) {
        if (A[i] == A[i + 1]) {
            hasDuplicate = true;
            break;
        }
    }

    if (hasDuplicate) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
