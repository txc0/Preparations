#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node(int val)
        {
            this->val=val;
            this->next=NULL;
        }
};
void insert_at_tail(Node *&head,Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void diff(Node *head)
{
    int max = head->val;
    int min = head->val;
    Node *tmp = head;
    while(tmp != NULL)
    {
        if(tmp->val > max)
        {
            max = tmp->val;
        }
        tmp = tmp->next;
    }
    Node *tmp2 = head;
    while(tmp2 != NULL)
    {
        if(tmp2->val < min)
        {
            min = tmp2->val;
        }
        tmp2 = tmp2->next;
    }

    cout<<max-min;

}
int main()
{
    int val;
    Node *head = NULL;
    Node *tail = NULL;
    while(true)
    {
        cin>>val;
        if(val == -1)break;
        insert_at_tail(head,tail,val);
    }
    diff(head);
 return 0;   
}