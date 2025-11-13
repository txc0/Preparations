#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_linekd_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int size_linked_list(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val1;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
            break;
        insert_tail(head1, tail1, val1);
    }

    print_linekd_list(head1);
    int s1 = size_linked_list(head1);
    s1--;
    cout<<endl<<s1<<endl;
    Node *tmp = head1;
    int mid = s1 / 2;
    if (mid % 2 != 0)
    {
        mid = mid+1;
        while (mid--)
        {
            tmp = tmp->next;
        }
        cout << tmp->val<<" ";
    }
    
    else{
         while (mid--)
    {
        tmp = tmp->next;
    }
     cout << tmp->val;
    }
   
    
   

    return 0;
}