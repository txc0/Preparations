#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       int n,s;
   int flag = 0;
   cin>>n>>s;
   int arr[n];
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   for(int i=0;i<n;i++)
   {
    for(int j=i+1; j<n; j++)
    {
        for(int k=j+1; k<n; k++)
        {
            if(arr[i]+arr[j]+arr[k]==s)
            {
                flag++;
            }
        }
    }
   }
   if(flag==0)
   {
    cout<<"NO\n";
   }
   else
   {
    cout<<"YES\n";
   }
    }
    
   

    return 0;
}