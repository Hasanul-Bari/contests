#include <iostream>
using namespace std;

// Function to return gcd of a and b
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

// Function to find largest subset with GCD 1
int largestGCD1Subset(int A[], int n)
{
    // finding gcd of whole array
    int currentGCD = A[0];
    for (int i=1; i<n; i++)
    {
        currentGCD = gcd(currentGCD, A[i]);

        // If current GCD becomes 1 at any momemnt,
        // then whole array has GCD 1.
        if (currentGCD == 1)
            return n;
    }

    return 0;
}

// Driver program to test above function
int main()
{
    int A[] = {1,6,2,9,8};
    int n = sizeof(A)/sizeof(A[0]);
    cout << largestGCD1Subset(A, n);
    return 0;
}
