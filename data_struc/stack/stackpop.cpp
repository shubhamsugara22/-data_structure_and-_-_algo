#include <iostream.h>
#include <conio.h>
#include <process.h>
int pop(int[], int &);
int push(int[], int &, int);
void display(int[], int);
const int size = 50;
int main()
{
    clrscr();
    int stack[size], item, top = -1, res;
    char ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
        cout << "enter item for insertion :" << endl;
        cin >> item;
        res = push(stack, top, item);
        if (res == -1)
        {
            cout << "overflow!!! aborting!" << endl;
            exit(1);
        }
        cout << "the stack now is :" << endl;
        display(stack, top);
        cout << "want to insert more elements (y/n)" << endl;
        cin >> ch;
    }
    cout << "now deletion of elements begins" << endl;
    ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
        res = pop(stack, top);
        if (res == -1)
        {
            cout << "underflow!!! aborting!" << endl;
            exit(1);
        }
        else
        {
            cout << "element deleted is :" << res << endl;
            cout << "the stack now is :" << endl;
            display(stack, top);
        }
        cout << "want to delete more elements ?(y/n)" << endl;
        cin >> ch;
    }
    return 0;
}
int push(int stack[], int &top, int ele)
{
    if (top == size - 1)
        return -1;
    else
    {
        top++;
        stack[top] = ele;
    }
    return 0;
}
int pop(int stack[], int &top)
{
    int ret;
    if (top == -1)
        return -1;
    else
    {
        ret = stack[top];
        top--;
    }
    return ret;
}
void display(int stack[], int top)
{
    if (top == -1)
        return;
    cout << stack[top] << "<--" << endl;
    for (int i = top - 1; i >= 0; i--)
    {
        cout << stack[i] << endl;
    }
}
