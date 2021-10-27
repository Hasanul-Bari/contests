#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int n,x;
    cin>>n;

    map<int,int> freq,freqOfFreq;

    int maxf=0,maxfof=0;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        freq[x]++;

        maxf=max(maxf,freq[x]);

    }

    for(auto x : freq)
    {
        freqOfFreq[x.second]++;
    }

    maxfof=max(maxfof,freqOfFreq[maxf]);

    int ans=maxfof-1;

    int rem=n-(maxf*maxfof);
    int slot=maxf-1;

    ans=ans+(rem/slot);

    //cout<<maxf<<" "<<rem<<endl;


    cout<<ans<<endl;

}


int main()
{
    faster

    int t; cin>>t; for(int tc=1; tc<=t; tc++)solve(tc);

    //solve(1);



    return 0;
}


