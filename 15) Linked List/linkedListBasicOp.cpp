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

//INSERT AT HEAD (START OF LINKED LIST)
//we need to pass address of head because we going to change data in head node.
void insertAtHead(Node *&Head, int data)
{
    Node *n = new Node(data);
    // case 1: f there is not signle element -> head=new node
    if (Head == NULL)
    {
        Head = n;
        return;
    }
    //case 2: ther is node -> store n->next = head value and head = new node address.
    Node *temp = Head;
    n->next = Head;
    Head = n;
}

//SEARCH ELEMENT IN LINKED LIST.
//return position of search key in linked list .
//store head  address in temp so there no need to declare temp variable sprately.
int serachInLL(Node *temp, int key)
{
    int count = 1;
    if (temp->data == key)
        return count;
    while (temp->data != key && temp != NULL)
    {
        temp = temp->next;
        count++;
        if (temp->data == key)
            return count;
    }

    return -1;
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

//DELETE BY VALUE
//if Node value ==key then delete that node
void deleteByValue(Node *&Head, int key)
{
    Node *temp = Head;
    while (temp->next->data != key)
    {
        temp = temp->next;
    }
    Node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

//DELETE HEAD (FIRST) NODE.
//store first node address in head .
void deleteHead(Node *&Head)
{
    Node *toDelete = Head;
    Head = Head->next;
    delete toDelete;
}

int main()
{

    Node *Head = NULL;
    //INSERTION PART
    insertAtTail(Head, 2);
    insertAtTail(Head, 4);
    insertAtTail(Head, 6);
    insertAtTail(Head, 8);
    insertAtHead(Head, 1);

    //DISPLAY AND SEARCH.
    display(Head);
    cout << serachInLL(Head, 8) << endl;

    //DELETION PART
    deleteByValue(Head, 8);
    cout << "AFTER DELETE 8 VALUE NODE :>>" << endl;
    display(Head);
    deleteHead(Head);
    cout << "AFTER DELETE HEAD (FIRST) NODE :>>" << endl;
    display(Head);

    return 0;
}