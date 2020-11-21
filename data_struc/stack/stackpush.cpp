#include <iostream.h>
#include <conio.h>
int push();
void diplay();
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
        cout << "want to inert more elemants?(y/n)" << endl;
        cin >> ch;
    }
    return 0;
}
int push(int stack[], int &top, int ele)
{
    if (top == size - 1)
    {
        return -1;
    }
    else
    {
        top++;
        stack[top] = ele;
    }
    return 0;
}
void display(int stack[], int top)
{
    cout << stack[top] << "<--" << endl;
    for (int i = top - 1; i >= 0; i--)
    {
        cout << stack[i] << endl;
    }
