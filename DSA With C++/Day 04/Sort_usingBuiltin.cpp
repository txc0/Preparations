#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int id;
    int marks;

};

bool cmp(Student l, Student R)
{
    return l.marks>=R.marks;
}

int main()
{
    int n;
    cin>>n;
    Student a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i].name>>a[i].id>>a[i].marks;
    }
    sort(a,a+n,cmp);

    for(int i=0; i<n; i++)
    {
        cout<<a[i].name<<" "<<a[i].id<<" "<<a[i].marks<<endl;
    }



   
    return 0;
}