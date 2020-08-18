#include<bits/stdc++.h>
using namespace std;

void primefactorize(int n)
{
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                cout<<i<<" ";
                n=n/i;
            }
        }
    }
    if(n>1)
        cout<<n<<" ";

}




int main()
{
    int n;
    cin>>n>>t;
    if(t%n==0)
    {
        primefactorize(n);
         cout<<endl;
    }




    return 0;

}

