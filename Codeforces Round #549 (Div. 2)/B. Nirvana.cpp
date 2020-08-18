// CPP program to find the
// number with maximum digit
// sum.
#include <bits/stdc++.h>
using namespace std;

// function to calculate the
// sum of digits of a number.
int sumOfDigits(int a)
{
    int sum = 0;
    while (a)
    {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

// Returns the maximum number
// with maximum sum of digits.
int findMax(int x)
{
    // initializing b as 1 and
    // initial max sum to be of n
    int b = 1, ans = x;

    // iterates from right to
    // left in a digit
    while (x)
    {

        // while iterating this
        // is the number from
        // from right to left
        int cur = (x - 1) * b + (b - 1);

        // calls the function to
        // check if sum of cur is
        // more then of ans
        if (sumOfDigits(cur) > sumOfDigits(ans) ||
           (sumOfDigits(cur) == sumOfDigits(ans) &&
            cur > ans))
            ans = cur;

        // reduces the number to one unit less
        x /= 10;
        b *= 10;
    }

    return ans;
}

// driver program
int main()
{
    int n;
    cin>>n;
    cout << findMax(n);
    return 0;
}
