#include <iostream>
#include <vector>
#include <algorithm> // for sort

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<int> a(n);


    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Sort the array
    sort(a.begin(), a.end());

    int count = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] + 1 == a[i + 1]) {
            count++;
        }
        // Handle duplicates
        while (i < n - 1 && a[i] == a[i + 1]) {
            if (a[i] + 1 == a[i + 1]) {
                count++;
            }
            i++;
        }
    }

    cout << count << endl;

    return 0;
}
