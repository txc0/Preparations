#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n ;
   cin>>n;
   vector<int> v(n);
   for(int i=0; i<n; i++)
   {
    cin>>v[i];
   }
   for(int x : v)
   {
    
    if(x!=0 && x>0)
    {
        x=1;
    }
    if(x!=0 && x<0)
    {
        x=2;
    }
    cout<<x<<" ";
    
   }


    return 0;
}