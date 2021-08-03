#include "bits/stdc++.h"

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

void insertAtHead(Node *&Head, int data)
{
    Node *n = new Node(data);
    if (Head == NULL)
    {
        Head = n;
        n->next = Head;
        return;
    }
    Node *temp = Head;

    while (temp->next != Head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = Head;
    Head = n;
}

void insertAtTail(Node *&Head, int data)
{
    Node *n = new Node(data);

    if (Head == NULL)
    {
        insertAtHead(Head, data);
    }
    Node *temp = Head;
    while (temp->next != Head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = Head;
}
void deleteHead(Node *&Head)
{
    Node *temp = Head;
    while (temp->next != Head)
    {
        temp = temp->next;
    }
    Node *toDelete = temp->next;
    temp->next = temp->next->next;
    Head = temp->next;
    toDelete->next = NULL;

    delete toDelete;
}
void deletion(Node *&Head, int posi)
{
    Node *temp = Head;

    if (posi == 1)
    {
        deleteHead(Head);
    }
    int count = 1;
    while (count != posi - 1)
    {
        temp = temp->next;
        count++;
    }
    Node *toDelete = temp->next;
    temp->next = temp->next->next;
    toDelete->next = NULL;
    delete toDelete;
}

void display(Node *Head)
{
    Node *temp = Head;
    do
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != Head);
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

    deletion(Head, 3);
    deletion(Head, 1);

    display(Head);
    return 0;
}