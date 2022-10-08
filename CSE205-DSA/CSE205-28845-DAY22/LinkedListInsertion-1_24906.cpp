#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    
    Node(int x) {
        data = x;
        next = NULL;
    }
};

void insertList(Node **head, int num) {
    Node *temp = *head;
    Node *newnode = new Node(num);
    if (temp == NULL) {
        *head = newnode;
        return;
    }
    
    while (temp->next) {
        temp = temp->next;
    }
    
    temp->next = newnode;
}

Node* insertAtPos(Node *head, int pos, int num) {
    Node *newnode = new Node(num);

    if (pos == 1) {
        newnode->next = head;
        return newnode;
    }

    Node *temp = head;
    for (int i = 0; i < pos-2; ++i) {
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    Node *head = NULL;
    int n = 5;
    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        insertList(&head, x);
    }

    int pos, num;
    cin >> pos >> num;

    head = insertAtPos(head, pos, num);
    // print list
       while (head) {
           cout << head->data << " ";
           head = head->next;
       }
    return 0;
}
