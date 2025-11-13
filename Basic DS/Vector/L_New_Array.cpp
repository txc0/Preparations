#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
   cin>>n;
   vector<int> v1(n);
   vector<int> v2(n);
   vector<int> v;
   for(int i=0; i<n; i++)
   {
    cin>>v1[i];
   }
   for(int i=0; i<n; i++)
   {
    cin>>v2[i];
   }
   v.insert(v.end(),v2.begin(),v2.end());
   v.insert(v.end(),v1.begin(),v1.end());
   for(int i=0; i<n+n;i++)
   {
    cout<<v[i]<<" ";
   }

    return 0;
}