#include<bits/stdc++.h>
using namespace std;

long long primedivisor(long long n)
{
    vector<long long> least_prime(n+1, 0);

    least_prime[1] = 1;

    for (long long i = 2; i <= n; i++)
    {
        if (least_prime[i] == 0)
        {
            least_prime[i] = i;


            for (long long j = 2*i; j <= n; j += i)
                if (least_prime[j] == 0)
                   least_prime[j] = i;
        }
    }

    long long hp=least_prime[n];
    return hp;
}

long long algo(long long n)
{
    long long c=0;

    while(n!=0)
    {
        long long d=primedivisor(n);
        n=n-d;
        c++;
    }
    return c;
}

int main()
{
    long long n;
    cin>>n;
    cout<<algo(n)<<endl;
    return 0;
}
