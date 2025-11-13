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
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << "Inserted at head" << endl;
             
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp ekhon last node e
    tmp->next = newNode;
    cout << "Inserted at tail" << endl;
}
void print_linked_list(Node *head)
{
    cout << endl;
    cout << "Your Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        if(tmp->val==-1)
        {
            continue;
        }
        cout << tmp->val << " ";
        tmp = tmp->next;
    }

}

int main()
{
    cout << "Enter: ";
    int v;
    int cnt = 0;

    Node *head = NULL;
    while (true)
    {
       

        cin >> v;
         if (v == -1)
        {
            break;
        }
        insert_at_tail(head, v);
    }
    print_linked_list(head);
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    cout << cnt - 1;

    return 0;
}