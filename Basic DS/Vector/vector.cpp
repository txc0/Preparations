// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//    vector<int> v={1,2,3,4};
//     //v.resize(2);
//     v.resize(4);
//     //v.insert(v.begin()+3,10);
//     v.erase(v.begin()+2,v.end());
//     for(int s : v )
//     {
//         cout<<s<<" ";
//     }


//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm> // for sort

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> a(n);

    cout << "Enter the elements of the array: ";
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

    cout << "The number of elements such that a[i] + 1 exists in the array: " << count << endl;

    return 0;
}
