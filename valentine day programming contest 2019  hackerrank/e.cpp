#include <bits/stdc++.h>
using namespace std;


int power(long long int x, long long int y, long long int p)
{
    long long int res = 1;
    x = x % p;

    while (y > 0)
    {

        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}


int numberOfDigits(int x)
{
    int i = 0;
    while (x)
    {
        x /= 10;
        i++;
    }
    return i;
}

// C++ function to print last k digits of a^b
void printLastKDigits(int a, int b, int k)
{
    cout << "Last " << k;
    cout << " digits of " << a;
    cout << "^" << b << " = ";

    // Generating 10^k
    int temp = 1;
    for (int i = 1; i <= k; i++)
        temp *= 10;

    // Calling modular exponentiation
    temp = power(a, b, temp);

    // Printing leftmost zeros. Since (a^b)%k
    // can have digits less then k. In that
    // case we need to print zeros
    for (int i = 0; i < k - numberOfDigits(temp); i++)
        cout << 0;

    // If temp is not zero then print temp
    // If temp is zero then already printed
    if (temp)
        cout << temp;
}

// Driver program to test above functions
int main()
{
    int a = 11;
    int b = 3;
    int k = 2;
    printLastKDigits(a, b, k);
    return 0;
}
