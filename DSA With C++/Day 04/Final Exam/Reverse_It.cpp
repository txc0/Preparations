#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int cl;
        string s;
        int id;
};
int main()
{
    int n;
    cin>>n;
    Student s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i].name>>s[i].cl>>s[i].s>>s[i].id;
    }
    int j=n-1;
    for(int i=0;i<n;i++)
    {
        cout<<s[i].name<<" "<<s[i].cl<<" "<<s[j].s<<" "<<s[i].id<<endl;
        j--;
    }



}