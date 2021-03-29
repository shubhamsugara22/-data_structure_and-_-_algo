//fibonnacci using dynamic programming
#include <iostream>
using namespace std;
int fib(int n)
{
    int f[n + 1];
    int i;
    f[0] = 0;
    f[1] = 1;
    for (i = 2; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}

int main()
{
    int n;
    cout << " enter the place for fibonnaci" << endl;
    cin >> n;
    cout << "the fibonacci number is";
    int x = fib(n);
    cout << x;
    return 0;
}