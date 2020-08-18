#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;





int main()
{
    faster

    int n;
    cin>>n;
    map<int,int> m;

    vector<bool> prime(n*2,true);

    for(long long i=2; i*i<=n*2; i++)
    {
        if(prime[i]==true)
        {
            for(long long j=i*i; j<=n*2; j=j+i)
                prime[j]=false;
        }
    }

    for(long long i=2; i<=n*2; i++)
    {
        if(prime[i]==true)
        {
            m[i]++;
            //cout<<i<<" ";
        }

    }




    int x=0,y=0,h;

    for(int i=0; i<n; i++)
    {
        cin>>h;
        if(h==1)
            x++;
        else
            y++;
    }

    int s=0;
    for(int i=0; i<n ; i++)
    {
        if(m[s+1]==1 && x!=0)
        {
            s=s+1;
            cout<<1<<" ";
            x--;
        }
        else if(m[s+2]==1 && y!=0)
        {
            s=s+2;
            cout<<2<<" ";
            y--;
        }
        else if(y!=0)
        {
            cout<<2<<" ";
            y--;
        }
        else if(x!=0)
        {
            cout<<1<<" ";
            x--;
        }


    }
    cout<<endl;







    return 0;
}



