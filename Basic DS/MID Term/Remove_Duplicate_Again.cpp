#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int v) {
    Node *newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void remove_duplicates(Node *&head) {
    if (head == NULL) return;

    // Using a list to track unique values
    list<int> uniqueValues;
    Node *tmp = head;

    while (tmp != NULL) {
        // Insert value only if it's not already in the list
        if (find(uniqueValues.begin(), uniqueValues.end(), tmp->val) == uniqueValues.end()) {
            uniqueValues.push_back(tmp->val);
        }
        tmp = tmp->next;
    }

    // Sort the list of unique values
    uniqueValues.sort();

    // Clear the original linked list
    head = NULL;
    Node *tail = NULL;

    // Insert unique and sorted values back into the linked list
    for (int val : uniqueValues) {
        insert_at_tail(head, tail, val);
    }
}

void print_list(Node *head) {
    Node *tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main() {
    int val;
    Node *head = NULL;
    Node *tail = NULL;
    
    while (true) {
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head, tail, val);
    }
    
    remove_duplicates(head);
    print_list(head);

    return 0;   
}
