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

Node *mergeTwoLL(Node *Head1, Node *Head2)
{
    Node *ptr1 = Head1;
    Node *ptr2 = Head2;

    Node *dummy = new Node(0);
    Node *ptr3 = dummy;

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->data < ptr2->data)
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else
        {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }
    while (ptr1 != NULL)
    {
        ptr3->next = ptr1;
        ptr1 = ptr1->next;
        ptr3 = ptr3->next;
    }
    while (ptr2 != NULL)
    {
        ptr3->next = ptr2;
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;
    }
    return dummy->next;
}

int main()
{
    Node *Head1 = NULL;
    Node *Head2 = NULL;
    //INSERTION PART
    insertAtTail(Head1, 1);
    insertAtTail(Head2, 2);
    insertAtTail(Head2, 3);
    insertAtTail(Head1, 4);
    insertAtTail(Head1, 5);
    insertAtTail(Head2, 6);

    insertAtTail(Head1, 8);
    insertAtTail(Head2, 9);

    //DISPLAY
    display(Head1);
    display(Head2);
    Node* MergeHead = mergeTwoLL(Head1, Head2);
    display(MergeHead);

    return 0;
}