#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int n,m;
    string s;
    cin>>n>>m>>s;

    vector<int> z;

    int zz=0;

    map<int,bool> ones;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='0')
        {
            zz++;
        }
        else
        {
            z.pb(zz);
            zz=0;
            ones[i]=true;
        }
    }

    z.pb(zz);


    int f=0,sc=min(z[0],m),j=1;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='0')
        {
            if(f>0)
            {
                s[i]='1';
                f--;
            }
            else if(i+sc<n && s[i+sc]=='1')
            {
                sc--;
                s[i]='1';
            }
        }
        else
        {
            int nz=z[j];
            j++;

            if(j==z.size())
            {
                f=(nz,m);
                sc=0;
            }
            else
            {
                f=min(nz/2,m);
                sc=min(nz/2,m);
            }
        }
    }

    cout<<s<<endl;








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

