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

void reverseLL(Node *&Head)
{

    Node *prev = NULL;
    Node *curr = Head;
    Node *nxt;
    while (curr != NULL)
    {
        nxt = curr->next;
        //reverseing the link
        curr->next = prev;
        //moving to next posi
        prev = curr;
        curr = nxt;
    }
    Head = prev;
}

Node *reverseLLRecursive(Node *&Head)
{
    if (Head == NULL || Head->next == NULL)
    {
        return Head;
    }

    Node *newHead = reverseLLRecursive(Head->next);
    Head->next->next = Head;
    Head->next = NULL;
    return newHead;
}
int main()
{
    Node *Head = NULL;
    //INSERTION PART
    insertAtTail(Head, 2);
    insertAtTail(Head, 4);
    insertAtTail(Head, 6);
    insertAtTail(Head, 8);
    insertAtTail(Head, 10);

    //DISPLAY
    display(Head);

    //REVERSE LINKED LIST.
    reverseLL(Head);
    display(Head);
    display(reverseLLRecursive(Head));

    return 0;
}