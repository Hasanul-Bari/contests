#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;



void solve(int tc)
{
    int n;
    cin>>n;

    ll a[n];


    for(int i=0; i<n; i++){

        cin>>a[i];

    }

    sort(a,a+n);

    ll ans=-1;

    for(int i=1; i<n; i++){

        ll diff=abs(a[i]-a[i-1]);

        if(diff!=0){
            if(ans==-1)
                ans=diff;
            else{
                ans=__gcd(ans,diff);
                //cout<<ans<<" ** "<<diff<<endl;
            }

        }
    }


    cout<<ans<<endl;


}


int main()
{
    faster

    int t; cin>>t; for(int tc=1; tc<=t; tc++)solve(tc);

    //solve(1);



    return 0;
}


