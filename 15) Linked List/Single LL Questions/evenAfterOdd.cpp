#include "bits/stdc++.h"

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

//INESRT AT END OF THE LINKED LIST.
//we need to pass address of head because we going to change data in head node.
void insertAtTail(Node *&Head, int data)
{
    Node *n = new Node(data);

    // case 1: there no node -> or -> head =null -> add new node address in head.
    if (Head == NULL)
    {
        Head = n;
        return;
    }
    //case 2: there is node -> travel till temp->next==null ->  add new node at temp->next
    Node *temp = Head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

//DISPLAY ALL NODES IN LINKED LIST.
//we need  no to pass address of head because we not going to change data in head node,we need to print only .
void display(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int length(Node *temp)
{
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void evenAfterOdd(Node *&Head)
{
    Node *even = Head->next;
    Node *evenStart = even;
    Node *odd = Head;
    while (even->next != NULL && odd->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
        // cout << "WHIle" << endl;
    }
    odd->next = evenStart;
    if (odd->next != NULL)
    {
        even->next = NULL;
    }
}

int main()
{
    Node *Head = NULL;
    //INSERTION PART
    insertAtTail(Head, 1);
    insertAtTail(Head, 2);
    insertAtTail(Head, 3);
    insertAtTail(Head, 4);
    insertAtTail(Head, 5);
    insertAtTail(Head, 6);

    //DISPLAY
    display(Head);

    evenAfterOdd(Head);

    display(Head);

    return 0;
}