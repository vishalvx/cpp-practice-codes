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

bool detectCycle(Node *Head)
{
    Node *fast = Head;
    Node *slow = Head;
    while (fast != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            return 1;
        }
    }
    return 0;
}

void makeCycle(Node *&Head, int posi)
{
    int count = 1;
    Node *temp = Head;
    Node *cyclePoint;
    while (temp->next != NULL)
    {
        if (count == posi)
        {
            cyclePoint = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = cyclePoint;
}

void deleteCycle(Node *Head)
{
    Node *fast = Head;
    Node *slow = Head;
    do
    {
        fast = fast->next->next;
        slow = slow->next;
    } while (fast != slow);

    while (fast->next != NULL && slow->next != NULL)
    {
        slow->next = NULL;
    }
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
    insertAtTail(Head, 12);

    //DISPLAY AND SEARCH.
    display(Head);
    cout << detectCycle(Head) << endl;

    makeCycle(Head, 3);
    cout << detectCycle(Head) << endl;
    
    deleteCycle(Head);
    display(Head);
    return 0;
}