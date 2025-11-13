#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if (v.size() == 0)
            return true;
        else
            return false;
    }
};

bool cmp(myStack st1 , myStack st2)
{
    if (st1.size() != st2.size())
        return false;

    while (!st1.empty() && !st2.empty())
    {
        if (st1.top() != st2.top())
            return false;
        st1.pop();
        st2.pop();
    }

    //return true;
}

int main()
{
    myStack st1;
    myStack st2;

    int n,m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    while (st1.empty() == false)
    {
        cout << st1.top() << " ";
        st1.pop();
    }
    cout<<endl;

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }
    while (st2.empty() == false)
    {
        cout << st2.top() << " ";
        st2.pop();
    }
    cout<<endl;
    if(cmp(st1,st2))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}