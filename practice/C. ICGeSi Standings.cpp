#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    ll n,s,tp,m,id,x;
    cin>>n;

    map<ll,ll> sm,tpm;
    map<ll,vector<ll> > pm;

    for(int i=0; i<n; i++)
    {
        cin>>id>>s>>tp>>m;
        sm[id]=s;
        tpm[id]=tp;

        while(m--)
        {
            cin>>x;
            pm[id].pb(x);
        }
    }

    ll act[n];
    for(ll i=0; i<n; i++)
        cin>>act[i];

    for(ll i=0; i<n; i++)
    {
        id=act[i];

        if(i==0)
        {
            for(ll j=0; j<pm[id].size(); j++)
            {
                sm[id]++;
                tpm[id]+=pm[id][j];
            }
        }
        else
        {
            ll pid=act[i-1];

            if(sm[pid]<sm[id])
            {
                cout<<"Case "<<tc<<": Say no to rumour >:"<<endl;
                return;
            }
            if(sm[pid]==sm[id] && tpm[pid]>tpm[id] )
            {
                cout<<"Case "<<tc<<": Say no to rumour >:"<<endl;
                return;
            }

            for(ll j=0; j<pm[id].size(); j++)
            {
                if(sm[pid]>sm[id]+1)
                {
                    sm[id]++;
                    tpm[id]+=pm[id][j];

                }
                else if(sm[pid]==sm[id]+1 && tpm[pid]<=tpm[id]+pm[id][j])
                {
                    sm[id]++;
                    tpm[id]+=pm[id][j];
                }
                else
                {
                    break;
                }

            }
        }
    }

    /*for(int i=0; i<n; i++)
    {
        cout<<act[i]<<" * "<<sm[act[i]]<<" * "<<tpm[act[i]]<<endl;
    }*/

    cout<<"Case "<<tc<<": We respect our judges :)"<<endl;
    tc++;
}

int main()
{
    faster

    int tc;
    cin>>tc;

    for(int t=1; t<=tc; t++)solve(t);


    return 0;
}
