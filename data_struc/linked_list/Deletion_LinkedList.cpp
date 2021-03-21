// A program to perfrom delete option on Linked list
//DELETION
//1) At a given position
//2) Of a given data present in LinkedList
//Delete a Linked list
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
};
void print_list(Node *n)
{
	while (n->next != NULL)
	{
		cout << n->data << " ";
		n = n->next;
	}
}
//function to delete node using position
void deletepos(Node **head_ref, int pos)
{
	if (*head_ref == NULL)
	{
		return;
	}
	//if position is 0 at start
	Node *temp = *head_ref;
	if (pos == 0)
	{
		*head_ref = temp->next;
		free(temp);
		return;
	}
	for (int i = 0; temp != NULL && i < pos - 1; i++)
	{
		temp = temp->next;
	}
	//if position exceed the linkedlist total nodes
	if (temp == NULL || temp->next = NULL)
	{
		return;
	}
	Node *next = temp->next->next;
	free(temp->next);
	temp->next = next;
}
//function to delete a node in linked list
void deletenode(Node **head_ref, int key)
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
			return;
		}
		prev->next = temp->next;
		delete temp;
	}
}
//Function to delete the entire linked list
void deleteList(Node **head_ref)
{

	Node *current = *head_ref;
	Node *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head_ref = NULL;
}

void push(Node **head_ref, int new_data)
{

	Node *new_node = new Node();
	new_node->data = new_data;

	new_node->next = (*head_ref);

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
	printlist(head);
	cout << "\n";
	deletenode(&head, 4);
	cout << "\n";
	deletepos(&head, 2);
	cout << "\n";
	cout << "Deleting linked list";
	deleteList(&head);

	cout << "\nLinked list deleted";
}
