// A program using interative method to reverse a linkedlist
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

/* Link list node */
class Node
{
public:
	int data;
	Node *next;
};
void printlist(Node *n)
{
	while (n->data != NULL)
	{
		cout << n->data << " ";
		n = n->next;
	}
}
//Function to reverse the linked list using iterative method
void reverse(Node **head_ref)
{
	// Initialize current, previous and
	// next pointers
	Node *current = *head_ref;
	Node *prev = NULL, *next = NULL;

	while (current != NULL)
	{ // Store next
		next = current->next;
		// Reverse current node's pointer
		current->next = prev;
		// Move pointers one position ahead.
		prev = current;
		current = next;
	}
	*head_ref = prev;
}

void push(Node **head_ref, int new_data)
{
	Node *new_node = new Node();
	new_node->data = new_data;

	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

/* Driver program to test above function*/
int main()
{
	Node *head = NULL;
	push(&head, 20);
	push(&head, 4);
	push(&head, 15);
	push(&head, 85);
	printlist(head);
	reverse(&head);
	cout << "\nReversed Linked list \n";
	printlist(head);
	return 0;
}
