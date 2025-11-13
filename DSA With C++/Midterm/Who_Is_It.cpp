#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int id;
    char name[51];
    char sec[5];
    int marks;
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Student s1,s2,s3;
    cin>>s1.id>>s1.name>>s1.sec>>s1.marks;
    cin>>s2.id>>s2.name>>s2.sec>>s2.marks;
    cin>>s3.id>>s3.name>>s3.sec>>s3.marks;

    if((s1.marks>s2.marks || s1.marks==s2.marks && s1.id<s2.id) && (s1.marks>s3.marks ||s1.marks==s3.marks &&s1.id<s3.id))
    {
        cout<<s1.id<<" "<<s1.name<<" "<<s1.sec<<" "<<s1.marks;
    }
    else if((s2.marks>s1.marks || s2.marks==s1.marks && s2.id<s1.id) && (s2.marks>s3.marks || s2.marks==s3.marks && s2.id<s3.id))
    {
        cout<<s2.id<<" "<<s2.name<<" "<<s2.sec<<" "<<s2.marks;

    }
    else 
    {
        cout<<s3.id<<" "<<s3.name<<" "<<s3.sec<<" "<<s3.marks;

    }
    cout<<endl;

    }
    

    
   
    return 0;
}