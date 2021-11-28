#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

//author: Hasanul Bari


void solve(int tc)
{
    int n;
    cin>>n;

    int a[n],b[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);


    int bg=n/2;


    for(int i=0,j=0,k=bg; i<n; i++)
    {
        if(i%2==0)
        {
            b[i]=a[k];
            k++;
        }
        else
        {
            b[i]=a[j];
            j++;
        }

        //cout<<b[i]<<endl;
    }

    int ans=0;

    for(int i=1; i<n-1; i++)
    {
        if(b[i]<b[i-1] && b[i]<b[i+1])
            ans++;
    }

    cout<<ans<<endl;

    for(int i=0; i<n; i++)
        cout<<b[i]<<" ";
    cout<<endl;
}


int main()
{
    faster

    //int t; cin>>t; for(int tc=1; tc<=t; tc++)solve(tc);

    solve(1);



    return 0;
}



