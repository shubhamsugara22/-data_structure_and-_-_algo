// Program to create a simple circualt linked list
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
//
class Node
{
public:
    int data;
    Node *next;
};
//add a new at front
void push(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    Node *temp = *head_ref;
    new_node->data = new_data;
    new_node->next = *head_ref;
    if (*head_ref != NULL)
    {
        while (temp->next != *head_ref)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    else
    {
        new_node->next = new_node;
    }
    *head_ref = new_node;
}
//display list
void print_list(Node *head)
{
    Node *temp = head;
    if (head == NULL)
    {
        cout << "List is empty"
             << "\n";
    }
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

int main()
{
    Node *head = NULL;
    push(&head, 6);
    push(&head, 8);
    push(&head, 7);
    cout << "circular linkedlist  is"
         << " ";
    print_list(head);
    return 0;
}