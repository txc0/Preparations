#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *prev;
    Node *next;

    Node(int val)
    {
        value = val;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList
{
private:
    Node *head;
    Node *tail;
    int size;

public:
    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void insert_at_index(int index, int value)
    {
        if (index < 0 || index > size)
        {
            cout << "Invalid" << endl;
            return;
        }

        Node *newNode = new Node(value);

        if (index == 0)
        {
            if (head == NULL)
            {
                head = newNode;
                tail = newNode;
            }
            else
            {
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
        }
        else if (index == size)
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        else
        {
            Node *temp = head;
            for (int i = 0; i < index - 1; ++i)
            {
                temp = temp->next;
            }
            newNode->next = temp->next;
            newNode->prev = temp;
            temp->next->prev = newNode;
            temp->next = newNode;
        }

        size++;
        print_list();
    }

    void print_list()
    {
        cout << "L -> ";
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;

        cout << "R -> ";
        temp = tail;
        while (temp != nullptr)
        {
            cout << temp->value << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};

int main()
{
    int Q;
    cin >> Q;

    DoublyLinkedList dll;

    for (int i = 0; i < Q; i++)
    {
        int X, V;
        cin >> X >> V;
        dll.insert_at_index(X, V);
    }

    return 0;
}
