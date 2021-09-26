#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node()
    {
        next = NULL;
    }
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

//Insert values in linkedlist
Node* insert(Node* head, int val)
{
    Node *newptr = new Node(val);
    if(head == NULL)
    {
        head = newptr;
        return head;
    }
    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newptr;
    return head;
}

//Display values from linkedlist
void display(Node* head)
{
    Node* temp = head;
    if(head == NULL)
    {
        cout << "There is no element";
        return;
    }
    
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
    cout <<endl;
}

//Displaying middle element
int middle(Node* head)
{
    Node *sp = head, *fp = head;
    while(fp!= NULL and fp->next != NULL)
    {
        sp = sp->next;
        fp = fp->next->next;
    }
    return sp->data;
}
// Deleteting the middle node
Node *delnode(Node *head)
{
    Node *sp=head,*fp=head;
    Node *prev = sp;
    while(fp!= NULL and fp->next != NULL)
    {
        prev = sp;
        sp = sp->next;
        fp = fp->next->next;
    }
    prev->next = sp->next;
    delete sp;
    return head;
}
//Delete the entire list
Node* dellinkelist(Node *head)
{
    Node *prev=head;
    head= head->next;
    if(head == NULL)
    {
        delete prev;
    }
    while(head!=NULL)
    {
        delete prev;
        prev = head;
        head = head->next;
    }
    cout <<"Linked List Is empty now\n";
    return head;
}
//Display reverse of linkedlist
void reversedisplay(Node* head)
{
    if(head == NULL)
        return;
    reversedisplay(head->next);
    cout <<head->data <<" ";
}
//reverse the whole linkedlist
Node* reverse(Node* head)
{
    Node* prev= NULL;
    Node* curr = head;
    Node* next;
    while(curr!= NULL)
    {
        next = curr->next;
        curr->next = prev;
        curr = next;
        prev = curr;
    }
    return head;
}
int main()
{
    Node* head = NULL;
    head = insert(head, 10);
    head = insert(head, 20);
    head = insert(head, 30);
    head = insert(head, 40);
    head = insert(head, 50);
    // display(head);
    // cout << middle(head);
    // head = delnode(head);
    // display(head);
    // head = dellinkelist(head);
    // display(head);
    // reversedisplay(head);
    head = reverse(head);
    display(head);
    return 0;
}