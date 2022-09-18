#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
        int data;
        Node* next;

    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head,  int data)
{
    //we take call by reference because we dont want to create another LL , we want to change in the existing LL.
    //create a new node
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int data)
{
    //create a node first
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = tail -> next;
}

void insertAtPosition(Node *&head, Node *&tail, int pos, int data)
{
    if(pos == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count < pos-1)
    {
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;


}

void print(Node* &head)
{
    Node* temp = head;

    while(temp!= NULL)
    {
        cout << temp -> data << " -> ";
        temp = temp -> next ;
    }
    cout << "NULL"<< endl;
}

int main()
{
    Node* node1 = new Node(10);
    /*cout << node1 -> data << endl;
    cout << node1 -> next << endl;*/
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtTail(tail, 15);
    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 15);
    print(head);

    insertAtPosition(head, tail, 4, 458);
    print(head);

    insertAtHead(head, 12);
    print(head);

    cout << head->data << " " << tail->data << endl;
}