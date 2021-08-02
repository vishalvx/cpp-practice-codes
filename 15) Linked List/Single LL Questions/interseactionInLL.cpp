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

void makeIntersection(Node *Head1, Node *Head2, int posi)
{
    posi--;
    Node *ptr1 = Head1;
    Node *ptr2 = Head2;
    while (ptr2->next != NULL)
    {
        ptr2 = ptr2->next;
    }
    while (ptr1->next != NULL && posi--)
    {
        ptr1 = ptr1->next;
    }
    ptr2->next = ptr1;
}

int findIntersectionPoint(Node *Head1, Node *Head2)
{
    Node *ptr1, *ptr2;
    int l1 = length(Head1);
    int l2 = length(Head2);
    int diff = 0;
    if (l1 > l2)
    {
        diff = l1 - l2;
        ptr1 = Head1;
        ptr2 = Head2;
    }
    else
    {
        diff = l2 - l1;
        ptr1 = Head2;
        ptr2 = Head1;
    }

    while (diff-- && ptr1->next != NULL)
    {
        ptr1 = ptr1->next;
    }
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}

int main()
{
    Node *Head1 = NULL;
    Node *Head2 = NULL;
    //INSERTION PART
    insertAtTail(Head1, 1);
    insertAtTail(Head1, 2);
    insertAtTail(Head1, 3);
    insertAtTail(Head1, 4);
    insertAtTail(Head1, 5);
    insertAtTail(Head1, 6);

    insertAtTail(Head2, 8);
    insertAtTail(Head2, 9);

    makeIntersection(Head1, Head2, 3);
    //DISPLAY
    display(Head1);
    display(Head2);

    cout << findIntersectionPoint(Head1, Head2) << endl;

    // cout << length(Head1) << endl;

    return 0;
}