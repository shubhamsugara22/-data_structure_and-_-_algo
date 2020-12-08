// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function that returns true if all the digits
// of n divide the sum of the digits of n
bool isDivisible(long long int n)
{

    // Store a copy of the original number
    long long int temp = n;

    // Find the sum of the digits of n
    int sum = 0;
    while (n)
    {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }

    // Restore the original value
    n = temp;

    // Check if all the digits divide
    // the calculated sum
    while (n)
    {
        int digit = n % 10;

        // If current digit doesn't
        // divide the sum
        if (sum % digit != 0)
            return false;

        n /= 10;
    }

    return true;
}

// Driver code
int main()
{
    long long int n = 123;

    if (isDivisible(n))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
