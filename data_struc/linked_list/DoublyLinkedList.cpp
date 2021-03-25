//C++ program to demonstrate doubly linked list
//Operation
//1)Insertion
//At the start
//after a node
//at the end
//before a node
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

// A linked list node
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};
//function to push  new node at start of linked list
void push(Node **head_ref, int new_data)
{

    //create new node
    Node *new_node = new Node();
    new_node->data = new_data;
    //initialize next of new node to head and prev as null
    new_node->next = *head_ref;
    new_node->prev = NULL;
    // change the prev of head node to new_node
    if ((*head_ref) != NULL)
    {
        (*head_ref)->prev = new_node;
    }
    //move the head to new node
    (*head_ref) = new_node;
}
//function to add node after a node
void insertafter(Node *prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        cout << "the given node cannot be null";
        return;
    }
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
    new_node->prev = prev_node;
    if (new_node->next != NULL)
    {
        new_node->next->prev = new_node;
    }
}
//function to add node at end
void end(Node **head_ref, int new_data)
{
    //create new node
    Node *new_node = new Node();
    //store head value in last node
    Node *last = *head_ref;
    //enter data
    new_node->data = new_data;
    //point next of new node  ot null
    new_node->next = NULL;
    //check if linkedlist is empty
    if (*head_ref == NULL)
    {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }
    //till last node is reached NULL
    while (last->next != NULL)
    {
        last = last->next;
    }
    //last node next is null
    last->next = new_node;
    //new node prev point to last
    new_node->prev = last;
}
//function to add new node before a node
void insert_before(Node **head_ref, Node *next_node, int new_data)
{
    if (next_node == NULL)
    {
        cout << "given next node cannot be null";
    }
    //allocate new node
    Node *new_node = new Node();
    //insert new data
    new_node->data = new_data;
    //change prev of new node to  prev of next node
    new_node->prev = next_node->prev;
    //change of prev of next node to new node
    next_node->prev = new_node;
    //new node next points to next_node
    new_node->next = next_node;
    //change the next pointer of new node previous
    if (new_node->prev != NULL)
    {
        new_node->prev->next = new_node;
    }
    //if prev node is NULL then new nodeis head
    else
    {
        (*head_ref) = new_node;
    }
}
void printlist(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

/* Driver program to test above functions*/
int main()
{
    Node *head = NULL;
    push(&head, 8);
    push(&head, 4);
    push(&head, 16);
    push(&head, 5);
    end(&head, 67);
    // push after head +1
    insertafter(head->next, 7);
    insert_before(&head, head->next->next, 9);

    cout
        << "the doubly linkedlist is "
        << " ";
    printlist(head);
    return 0;
}
