#include <iostream>
#include <string>

using namespace std;

string replaceAll(string  S, string  X) {
    string result;
    int S_len = S.length();
    int X_len = X.length();

    for (int i = 0; i < S_len; ) {
        if ( S.substr(i, X_len) == X) {
            result += '#'; 
            i += X_len; 
        } else {
            result += S[i]; 
            ++i; 
        }
    }
    
    return result;
}

int main() {
    int T;
    cin >> T; 
    cin.ignore();

    for (int i = 0; i < T; ++i) {
        string S, X;
        cin>>S>>X;
        
        string result = replaceAll(S, X);
        cout << result << endl;
    }

    return 0;
}
