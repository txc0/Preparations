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
int  size_linked_list(Node *head)
{
    int cnt =0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
int print_max(Node *head)
{
    int max=0;
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
               max= i->val;
            }
            else
            {
                max= j->val;
            }
        }
    }
    return max;
}


int main()
{
    Node * head1 = NULL;
    Node * tail1 = NULL;
    int val1;
     while (true)
    {
        cin >> val1;
        if (val1 == -1)
            break;
        insert_tail(head1,tail1,val1);
    }
    
    Node * head2 = NULL;
    Node *tail2 = NULL;
    int val2;
     while (true)
    {
        cin >> val2;
        if (val2 == -1)
            break;
       insert_tail(head2, tail2, val2);
    }
    print_linekd_list(head1);
    print_linekd_list(head2);
   int m1= print_max(head1);
   int m2= print_max(head2);

   cout<<m1<<endl<<m2;



    return 0;
}