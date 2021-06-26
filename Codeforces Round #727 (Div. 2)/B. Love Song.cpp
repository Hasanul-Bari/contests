#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

ll a[100099][26];

void solve(int tc)
{

    int n,q,l,r;
    string s;

    cin>>n>>q>>s;

    for(int i=0; i<n; i++)
    {
        int x=s[i]-97;
        //cout<<x<<" x"<<endl;
        for(int j=0; j<26; j++)
        {
            if(j==x)
            {
                a[i+1][x]=a[i][x]+1;
                //cout<<"enter "<<a[i+1][x]<<endl;
            }
            else
            {
                a[i+1][j]=a[i][j];
            }
        }

    }

    /*for(int i=0; i<n; i++)
    {
        for(int j=0; j<26; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;

    }*/



    while(q--)
    {
        cin>>l>>r;

        ll s=0;

        for(int i=0; i<26; i++)
        {
            ll z=a[r][i]-a[l-1][i];
            //cout<<z<<" z"<<endl;

            s=s+(z*(i+1));
        }

        cout<<s<<endl;
    }


}


int main()
{
    faster

    //int t;
    //cin>>t;

    solve(1);
    //for(int tc=1; tc<=t; tc++)solve(tc);


    return 0;
}


