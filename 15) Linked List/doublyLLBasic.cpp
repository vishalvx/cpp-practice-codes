#include "bits/stdc++.h"

using namespace std;

class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int value)
    {
        this->data = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtHead(Node *&Head, int data)
{
    Node *n = new Node(data);
    if (Head != NULL)
        Head->prev = n;
    n->next = Head;
    Head = n;
}

void insertAtTail(Node *&Head, int data)
{
    if (Head == NULL)
    {
        insertAtHead(Head, data);
        return;
    }
    Node *temp = Head;
    Node *n = new Node(data);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void deleteHead(Node* &Head)
{
    Node *toDelete = Head;
    Head = Head->next;
    Head->prev = NULL;
    delete toDelete;
}

void deleteNode(Node* &Head, int posi)
{
    if (posi == 1)
    {
        deleteHead(Head);
        return;
    }
    Node *temp = Head;
    int count = 1;
    while (count != posi && temp->next != NULL)
    {
        count++;
        temp = temp->next;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
}

void display(Node *Head)
{
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *Head = NULL;
    insertAtHead(Head, 1);
    insertAtTail(Head, 2);
    insertAtTail(Head, 3);
    insertAtTail(Head, 4);
    insertAtTail(Head, 5);
    insertAtTail(Head, 6);
    insertAtTail(Head, 7);

    display(Head);

    deleteNode(Head, 1);
    deleteNode(Head, 5);

    display(Head);

    return 0;
}