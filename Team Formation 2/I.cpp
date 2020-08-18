#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

vector<int> primes,a;
vector<bool> prime(1000,true);

void factor(int n)
{
    for(long long i=0; i<=(primes.size()/2); i++)
    {
        if(n%primes[i]==0)
        {
            while(n%primes[i]==0)
            {
                //cout<<primes[i]<<" ";
                n=n/primes[i];
            }
            a.pb(primes[i]);
        }
    }
}

void seive()
{

    for(int i=2; i*i<=1000; i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*2; j<=1000; j=j+i)
                prime[j]=false;
        }
    }

    for(int i=2; i<=1000; i++)
    {
        if(prime[i]==true)
            primes.pb(i);
    }


}

int main()
{
    seive();
    int h;

    vector <int> adj[1001];

    for(int j=2; j<=1000; j++)
    {

        if(prime[j]!=true)
        {

            factor(j);
            for(int i=0; i<a.size(); i++)
            {
                //cout<<j<<" "<<a[i]<<" ";
                h=j+a[i];
                if(h<=1000)
                    adj[j].push_back(h);
            }
            //cout<<endl;

            a.clear();

        }

    }


    int t,src,tt,k=1;
    cin>>t;
    while(t--)
    {
        cin>>src>>tt;


        queue <int> q;

        map<int,int> visited;
        map<int,int> level;
        map<int,int> :: iterator itr;


        visited[src]=1;

        q.push(src);

        while(q.empty()!=1)
        {
            int x=q.front();
            q.pop();
            for(int i=0; i<adj[x].size(); i++)
            {
                int y=adj[x][i];
                if(visited[y]==0)
                {
                    visited[y]=1;
                    level[y]=level[x]+1;
                    q.push(y);
                }
            }
        }

        //cout<<level[tt]<<endl;
        if(src!=tt && level[tt]==0)
            cout<<"Case "<<k<<": -1"<<endl;
        else
            cout<<"Case "<<k<<": "<<level[tt]<<endl;

        k++;

    }

    return 0;

}


