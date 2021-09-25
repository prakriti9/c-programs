#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }

};

void insert(Node* &head, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    
}
void display(Node* &head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout << temp -> data <<' ';
        temp = temp -> next;
    }
}
int main()
{
    Node *head = NULL;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    display(head);
    
    return 0;
}