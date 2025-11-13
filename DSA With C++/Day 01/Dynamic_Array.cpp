#include<bits/stdc++.h>
using namespace std;

int * fun()
{
     int *a = new int;
    *a=100;
    cout<<*a<<endl;
    cout<<"fun "<<a<<endl;
    return a;
}

int main()
{
    int *p = fun();
    *p = 2000;
    cout<<*p<<endl;
    cout<<"main: "<<p;
   
    return 0;
}