//insertion in linked queue
#include <iostream.h>
#include <conio.h>
#include <process.h>
struct node
{
    int info;
    node *next;
} * front, *newptr, *save, *ptr, *rear;
node *create_new_node(int);
void insert_end(node *);
void display(node *);
int main()
{
    clrscr();
    front = rear = NULL;
    int inf;
    char ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
        cout << "enter information for the new code:" << endl;
        cin >> inf;
        newptr = create_new_node(inf);
        if (newptr == NULL)
        {
            cout << "cannot create new node !!! aborting!" << endl;
            exit(1);
        }
        insert_end(newptr);
        cout << "now the queue is(front....rear) :" << endl;
        display(front);
        cout << "press Y to enter moore nodes, N to exit" << endl;
        cin >> ch;
    }
    return 0;
}
node *create_new_node(int n)
{
    ptr = new node;
    ptr->info = n;
    ptr->next = NULL;
    return ptr;
}
void insert_end(node *np)
{
    if (front == NULL)
        front = rear = np;
    else
    {
        rear->next = np;
        rear = np;
    }
}
void display(node *np)
{
    while (np != NULL)
    {
        cout << np->info << "->";
        np = np->next;
    }
    cout << "!!!" << endl;
}
