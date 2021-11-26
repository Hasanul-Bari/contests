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
    string s;
    cin>>n>>s;

    bool r=false,b=false;

    for(int i=0; i<n; i++)
    {
        if(i%2==0 && (s[i]-48)%2!=0)
        {
            r=true;
        }
        if(i%2!=0 && (s[i]-48)%2==0)
        {
            b=true;
        }
    }


    if(n%2==0)
    {
        if(b==true)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
    else
    {
        if(r==true)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }

}


int main()
{
    faster

    int t; cin>>t; for(int tc=1; tc<=t; tc++)solve(tc);

    //solve(1);



    return 0;
}

//ascii 0=48  a=97  A=65
