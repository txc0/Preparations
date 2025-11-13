#include <bits/stdc++.h>
using namespace std;

int main()
{
   char a;
   cin>>a;
      if (a >= '0' && a <= '9') {
        cout <<"IS DIGIT\n";
    } else if (a >= 'A' && a <= 'Z') {
        cout <<"ALPHA\n";
         cout <<"IS CAPITAL\n";

    } else if (a >= 'a' && a <= 'z') {
        cout <<"ALPHA\n";
         cout <<"IS SMALL\n";
    }
    return 0;
}