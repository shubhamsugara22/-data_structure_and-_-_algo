//C++ program to demonstrate doubly linked list
//Operation 1)Insertion
#include <iostream.h>
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
//enter new node at start of linedl ist
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
    (*head_ref) = new_node
}

/* Driver program to test above functions*/
int main()
{
    Node *head = NULL;
    push(&head, 8)
}
