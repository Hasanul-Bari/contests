#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios:: sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl<<1<<endl;
    }
    else if(n==2)
    {
        cout<<1<<endl<<1<<" "<<1<<endl;
    }
    else
    {
        n=n+1;

        vector<bool> prime(n,true);

        for(long long i=2; i*i<=n; i++)
        {
            if(prime[i]==true)
            {
                for(int j=i*2; j<=n; j=j+i)
                    prime[j]=false;
            }
        }


        cout<<2<<endl;
        for(int i=2; i<=n; i++)
        {
            if(prime[i]==true)
                cout<<1<<" ";
            else
                cout<<2<<" ";
        }

        cout<<endl;
    }
    return 0;

}
