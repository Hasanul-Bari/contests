#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int n,k;
    cin>>n>>k;

    int a[k];
    for(int i=0; i<k; i++)
        cin>>a[i];

    sort(a,a+k);

    int curr=0,c=0;

    for(int i=k-1; i>=0; i--)
    {
        if(curr<a[i])
        {
            c++;
            curr=curr+(n-a[i]);
        }
        else
            break;

        //cout<<curr<<" ** "<<a[i]<<endl;
    }

    cout<<c<<endl;
}


int main()
{
    faster

    int t; cin>>t; for(int tc=1; tc<=t; tc++)solve(tc);

    //solve(1);



    return 0;
}



