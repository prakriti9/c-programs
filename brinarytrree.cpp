#include <bits/stdc++.h>
using namespace std;

class Node
{   
    public:
    int data;
    Node *left;
    Node * right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node *head, int val)
{
    Node *newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
    }
    else if(head->data > val)
    {
        head->right = insert(head->right, val);
    }
    else
    {
        head->left = insert(head->left, val);
    }
    return head;
}
bool search(Node *head, int key)
{
    if(head == NULL)
        return false;
    
    if(head->data == key)
        return true;

    else if(head->data > key)
        return search(head->left, key);
    else
        return search(head->right, key);
}
void preorder(Node *head)
{
    if(head == NULL)
        return;
    
    cout << head->data <<" ";
    preorder(head->left);
    preorder(head->right);
    cout<< endl;
}
void postorder(Node *head)
{
    if(head == NULL)
        return;
    
    postorder(head->left);
    postorder(head->right);
    cout << head->data <<" ";

    cout<< endl;
}
void inorder(Node *head)
{
    if(head == NULL)
        return;
    
    inorder(head->left);
    cout << head->data <<" ";
    inorder(head->right);
    cout<< endl;
}
int main()
{
    Node *head = NULL;
    head = insert(head, 10);
    head = insert(head, 15);
    head = insert(head, 7);
    head = insert(head, 100);

    int num;
    cin>> num; // Number to be searched

    if(search(head, num))
    {
        cout << "Found";
    }
    else{
        cout << "Not Found";
    }
    cout << endl <<endl;
    // displaypreorder(head);
    preorder(head);
    return 0;
}