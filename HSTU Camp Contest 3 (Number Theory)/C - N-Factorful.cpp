#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

vector<ll> primes;

int d[11][1000015];

void seive(ll n)
{

    vector<int> nof(n+1,0);

    /*cout<<nof.size()<<endl;

    for(int i=0; i<=n; i++)
    {
        cout<<nof[i]<<" ";
    }
    cout<<endl;*/

    nof[1]=0;

    for(ll i=2; i<=n; i++)
    {
        if(nof[i]==0)
        {
            nof[i]++;
            //cout<<i<<" -> ";
            for(ll j=i+i; j<=n; j=j+i)
            {
                nof[j]++;
                //cout<<j<<" ";
            }
            //cout<<endl;

        }
    }



    for(ll i=1; i<=n; i++)
    {

        //cout<<nof[i]<<endl;

        for(int j=0; j<=10; j++)
        {
            d[j][i]=d[j][i-1];

            if(nof[i]==j)
                d[j][i]++;
        }


    }

    //cout<<d[0][2]<<endl;

}



int main()
{
    faster

    seive(1000010);

    ll t,a,b,n;
    cin>>t;

    while(t--)
    {
        cin>>a>>b>>n;

        cout<<d[n][b]-d[n][a-1]<<endl;
    }







    return 0;
}
