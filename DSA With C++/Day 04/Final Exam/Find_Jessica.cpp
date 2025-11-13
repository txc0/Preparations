#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    getchar();
    stringstream ss(s);
    string j;
    bool flag = false;
    
    while (ss >> j)
    {
        if (j == "Jessica")
        {
            flag = true;
            break;
        }
    }
    
    if (flag== true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
   return 0;
}