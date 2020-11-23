#include <iostream.h>
#include <conio.h>
#include <process.h>
struct node
{
    int info;
    node *next;
} * front, *newptr, *save, *ptr, *rear;
node *create_new_node(int);
void insert(node *);
void display(node *);
void delnode_q();
int main()
{
    clrscr();
    front = rear = NULL;
    int inf;
    char ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
        cout << "enter the information for the new node :" << endl;
        cin >> inf;
        newptr = create_new_node(inf);
        if (newptr == NULL)
        {
            cout << "cannot create new node!!! aborting" << endl;
            exit(1);
        }
        insert(newptr);
        cout << "press Y to enter more nodes, N to exit :" << endl;
        cin >> ch;
    }
    do
    {
        cout << "the linked queue now is(front....to...rear) :" << endl;
        display(front);
        cout << "want to delete first node? (y/n)" << endl;
        cin >> ch;
        if (ch == 'y' || ch == 'Y')
            delnode_q();
    } while (ch == 'y' || ch == 'Y');
    return 0;
}
node *create_new_node(int n)
{
    ptr = new node;
    ptr->info = n;
    ptr->next = NULL;
    return ptr;
}
void insert(node *np)
{
    if (front == NULL)
    {
        front = rear = np;
    }
    else
    {
        rear->next = np;
        rear = np;
    }
}
void delnode_q()
{
    if (front == NULL)
        cout << "underflow!!!" << endl;
    else
    {
        ptr = front;
        front = front->next;
        delete ptr;
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
