//C++ program to demonstrate doubly linked list
//Operation 1)Insertion
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
//enter new node at start of linked list
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
void insertafter(Node *prev_node, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
    new_node->prev = prev_node;
    while (new_node->next != NULL)
    {
        new_node->next->prev = new_node;
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
    push(&head, 6);
    push(&head, 9);
    insertafter(head->next->next, 7);

    cout
        << "the doubly linkedlist is "
        << " ";
    printlist(head);
    return 0;
}
