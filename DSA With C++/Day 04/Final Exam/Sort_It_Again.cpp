#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string nm;
        int cls;
        string s;
        int id;
        int math_Mark;
        int eng_Mark;
};
int main()
{
    int n;
    cin>>n;
    Student s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i].nm>>s[i].cls>>s[i].s>>s[i].id>>s[i].math_Mark>>s[i].eng_Mark;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i].eng_Mark < s[j].eng_Mark)
            {
                swap(s[i],s[j]);
            }
            if(s[i].eng_Mark == s[j].eng_Mark)
            {
                if(s[i].math_Mark<s[j].math_Mark)
                {
                    swap(s[i],s[j]);
                }
                if(s[i].math_Mark==s[j].math_Mark)
                {
                    if(s[i].id>s[j].id)
                    {
                        swap(s[i],s[j]);
                    }
                }
            }
        } 
    }
    for(int i=0;i<n;i++)
    {
        cout<<s[i].nm<<" "<<s[i].cls<<" "<<s[i].s<<" "<<s[i].id<<" "<<s[i].math_Mark<<" "<<s[i].eng_Mark<<endl;
    }


 return 0;
}