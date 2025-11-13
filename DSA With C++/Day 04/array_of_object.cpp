#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int id;
    int marks;
};

int main()
{
    int n;
    cin>>n;
    Student *a = new Student[n];
   for(int i=0; i<n; i++)
   {
    getline(cin,a[i].name);
    getchar();
    cin>>a[i].id>>a[i].marks;
   }
   for(int i=0; i<n; i++)
   {
    cout<<a[i].id<<" "<<a[i].name<<" "<<a[i].marks<<endl;
   }


    return 0;
}