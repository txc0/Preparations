#include <iostream>
#include <list>

using namespace std;

void print_list(const list<int>& dll) {
    // Print from left to right
    cout << "L -> ";
    for (auto it = dll.begin(); it != dll.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Print from right to left
    cout << "R -> ";
    for (auto it = dll.rbegin(); it != dll.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    int Q;
    cin >> Q;
    list<int> dll;

    for (int i = 0; i < Q; ++i) {
        int X, V;
        cin >> X >> V;

        if (X == 0) {
            // Insert at head
            dll.push_front(V);
        } else if (X == 1) {
            // Insert at tail
            dll.push_back(V);
        } else if (X == 2) {
            // Delete the V-th index element
            if (V >= 0 && V < dll.size()) {
                auto it = dll.begin();
                for (int j = 0; j < V; ++j) {
                    ++it;
                }
                dll.erase(it);
            }
        }
        // Print the list
        print_list(dll);
    }

    return 0;
}
