#include <iostream>

using namespace std;

int sum(int ar[], int n)
{
    int sm = 0;
    for (int i = 0; i < n; i++)
    {
        sm += ar[i];
    }
    return sm;
}
int main()
{
    int ar[] = {12, 5, 7, 33};
    int n = sizeof(ar) / sizeof(ar[0]);
    cout << "Sum of given array " << sum(ar, n) << endl;

    // cout << "Hello World" << endl;

    return 0;
}