#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;


vector<bool> prime(1050,true);
vector<int> v;

void seive(int n)
{
    for(int i=2; i*i<=n; i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*i; j<=n; j=j+i)
                prime[j]=false;
        }
    }


    for(int i=2; i<=n; i++)
    {
        if(prime[i]==true)
        {
            v.pb(i);
            //cout<<i<<endl;
        }

    }

}

int main()
{
    faster

    seive(1010);

    int n;
    cin>>n;



    if(prime[n]==true)
    {
        cout<<n<<endl;
        for(int i=1; i<=n; i++)
        {
            if(i==n)
                cout<<i<<" "<<1<<endl;
            else
                cout<<i<<" "<<i+1<<endl;
        }
    }
    else
    {
        int x=upper_bound(v.begin(),v.end(),n)-v.begin();

        //cout<<v[x]<<endl;

        int r=v[x]-n;

        cout<<v[x]<<endl;

        for(int i=1; i<=n; i++)
        {
            if(i==n)
                cout<<i<<" "<<1<<endl;
            else
                cout<<i<<" "<<i+1<<endl;
        }

        for(int i=1,j=(n/2)+1; i<=r; i++,j++)
        {
            cout<<i<<" "<<j<<endl;
        }




    }





    return 0;
}
