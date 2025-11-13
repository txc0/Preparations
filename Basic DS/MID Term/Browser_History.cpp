#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string address;
    Node *prev;
    Node *next;
    Node(string address)
    {
        this->address = address;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string address)
{
    Node *newNode = new Node(address);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void handle_commands(Node *&current, Node *head, const string &command)
{
    if (command.substr(0, 6) == "visit ")
    {
        string address_to_visit = command.substr(6);
        Node *temp = head; 
        while (temp != NULL)
        {
            if (temp->address == address_to_visit)
            {
                current = temp; 
                cout << current->address << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Not Available" << endl;
    }
    else if (command == "next")
    {
        if (current->next != NULL)
        {
            current = current->next;
            cout << current->address << endl;
        }
        else
        {
            cout << "Not Available" << endl;
        }
    }
    else if (command == "prev")
    {
        if (current->prev != NULL)
        {
            current = current->prev; 
            cout << current->address << endl;
        }
        else
        {
            cout << "Not Available" << endl;
        }
    }
}

int main()
{
    string address;
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        cin >> address;
        if (address == "end")
            break;
        insert_at_tail(head, tail, address);
    }

    Node *current = head;

    int Q;
    cin >> Q;
    cin.ignore();

    for (int i = 0; i < Q; i++)
    {
        string command;
        getline(cin, command);
        handle_commands(current, head, command);
    }

    return 0;
}
