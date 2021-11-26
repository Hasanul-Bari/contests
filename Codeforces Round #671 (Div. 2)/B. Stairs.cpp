#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

//author: Hasanul Bari

ll sq[31];

void solve(int tc)
{
    ll n,cnt=0;
    cin>>n;

    while(n-sq[cnt]>=0)
    {
        n=n-sq[cnt];
        cnt++;
        //cout<<n<<" **"<<endl;
    }

    cout<<cnt<<endl;

}


int main()
{
    faster

    ll p4=1;
    for(int i=0; i<31; i++)
    {
        sq[i]=p4;
        if(i!=0)
            sq[i]+=(sq[i-1]*2);
        p4*=4;

        //cout<<sq[i]<<endl;
    }

    int t; cin>>t; for(int tc=1; tc<=t; tc++)solve(tc);

    //solve(1);



    return 0;
}


