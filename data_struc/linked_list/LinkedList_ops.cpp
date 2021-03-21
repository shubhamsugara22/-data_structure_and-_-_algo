// A Program to create  a simple linked list
//Basic Operation
// 1)Insertion
//   insert node at end
//   insert node at start
//   insert a new node after a node
// 2) transverse a Linked list
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
using namespace std;
class Node
{
public:
	int data;
	Node *next;
};
//function to  add new node at start
void push_start(Node **head_ref, int new_data)
{
	Node *new_node = new Node();
	new_node->data = new_data;

	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}
//function to add node at end
void end(Node **head_ref, int new_data)
{
	Node *new_node = new Node();
	Node *last = *head_ref;

	new_node->data = new_data;
	new_node->next = NULL;

	if(*head_ref==NULL{
		*head_ref = new_node;
	}
	while (last->next!=NULL){
		last = last->next;
	}
	last->next= new_node;
	return;
}
//insert a new node after a node
void insert(Node *prev_node, int new_data)
{
	if (prev_node == NULL)
	{
		cout << "Invalid Note";
		return;
	}
	// allocate a new Node
	Node *new_node = new Node();
	// add data to new Node
	new_node->data = new_data;
	// make next of new node as next of previous node
	new_node->next = prev_node->next;
	// make next of prev node point to new node
	prev_node->next = new_node;
}
//function to transverse a linked list
void print_list(Node *n)
{
	while (n->next != NULL)
	{
		cout << n->data << " ";
		n = n->next;
	}
}
// Program to create a simple linked
// list with 3 nodes
int main()
{
	Node *head = NULL;
	Node *second = NULL;
	Node *third = NULL;

	// allocate 3 nodes in the heap
	head = new Node();
	second = new Node();
	third = new Node();

	/* Three blocks have been allocated dynamically. 
	We have pointers to these three blocks as head, 
	second and third	 
	head		 second		 third 
		|			 |			 | 
		|			 |			 | 
	+---+-----+	 +----+----+	 +----+----+ 
	| # | # |	 | # | # |	 | # | # | 
	+---+-----+	 +----+----+	 +----+----+ 
# represents any random value. 
Data is random because we haven’t assigned 
anything yet */
	head->data = 1;		 // assign data in first node
	head->next = second; // Link first node with
	// the second node

	/* data has been assigned to the data part of first 
	block (block pointed by the head). And next 
	pointer of the first block points to second. 
	So they both are linked. 

	head		 second		 third 
		|			 |			 | 
		|			 |			 | 
	+---+---+	 +----+----+	 +-----+----+ 
	| 1 | o----->| # | # |	 | # | # | 
	+---+---+	 +----+----+	 +-----+----+	 
*/
	// assign data to second node
	second->data = 2;
	// Link second node with the third node
	second->next = third;
	// head		 second		 third
	// 	|			 |			 |
	// 	|			 |			 |
	// +---+---+	 +---+---+	 +----+----+
	// | 1 | o----->| 2 | o-----> | # | # |
	// +---+---+	 +---+---+	 +----+----+	 */
	third->data = 3; // assign data to third node
	third->next = NULL;
	// We have the linked list ready.

	// 	head
	// 		|
	// 		|
	// 	+---+---+	 +---+---+	 +----+------+
	// 	| 1 | o----->| 2 | o-----> | 3 | NULL |
	// 	+---+---+	 +---+---+	 +----+------+

	// Note that only the head is sufficient to represent
	// the whole list. We can traverse the complete
	// list by following the next pointers. */

	push_start(&head, 6);
	push_start(&head, 10);
	end(&head, 4);
	//insert a node after 2nd node (1)--index
	insert(head->next, 67)
		//insert a node after 3rd node (2)--index
		insert(head->next->next, 78)
			print_list(head);
	return 0;
}
