#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    bool flag = false;
    for (int i =0 ; i<n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            if (a[i] == a[j])
            {
                flag = true;
            }
        }
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO" ;

            return 0;
}