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


    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }

    sort(a,a+n);

    int c=1,diff=-1;


    for(int i=1; i<n; i++)
    {

        //cout<<diff<<" ** "<<a[i]<<endl;

        if(a[i]<=0)
        {
            if(diff==-1)
                diff=abs(a[i]-a[i-1]);
            else
                diff=min(abs(a[i]-a[i-1]),diff);

            c++;
        }
        else
        {
            if(diff==-1 && a[i-1]<=0)
                c++;
            else if(diff>=a[i])
            {
                c++;
            }
            break;
        }
    }


    cout<<c<<endl;


}


int main()
{
    faster

    int t;
    cin>>t;

    //solve(1);
    for(int tc=1; tc<=t; tc++)solve(tc);


    return 0;
}

