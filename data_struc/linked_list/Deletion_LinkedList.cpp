// A program to perfrom delete option on Linked list
//DELETION
//1) At a given position
//2) Of a given data present in LinkedList
//Delete a Linked list
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

/* Link list node */
class Node
{
public:
	int data;
	Node *next;
};
//function to delete a nodein linked list
void deletenode(Node **href, int key)
{
	Node *temp = *head_ref;
	Node *prev = NULL;
	//if head node has the key to be delted
	if (temp != NULL && temp->data == key)
	{
		*head_ref = temp->next;
		delete temp;
		return;
	}
	else
	{
		while (temp != NULL && temp->data != key)
		{
			prev = temp;
			temp = temp->next;
		}
		//key is non existent
		if (temp == NULL)
		{
			return
		}
		prev->next = temp->next;
		delete temp;
	}
}
//Function to delete the entire linked list
void deleteList(Node **head_ref)
{

	Node *current = *head_ref;
	Node *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	/* deref head_ref to affect the real head back 
	in the caller. */
	*head_ref = NULL;
}

/* Given a reference (pointer to pointer) to the head 
of a list and an int, push a new node on the front 
of the list. */
void push(Node **head_ref, int new_data)
{
	/* allocate node */
	Node *new_node = new Node();

	/* put in the data */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

/* Driver code*/
int main()
{
	/* Start with the empty list */
	Node *head = NULL;

	/* Use push() to construct below list 
	1->12->1->4->1 */
	push(&head, 1);
	push(&head, 4);
	push(&head, 1);
	push(&head, 12);
	push(&head, 1);

	cout << "Deleting linked list";
	deleteList(&head);

	cout << "\nLinked list deleted";
}
