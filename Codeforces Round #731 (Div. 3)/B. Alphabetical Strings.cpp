#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    string s;
    cin>>s;

    int ai=-1;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='a')
        {
            ai=i;
            break;
        }
    }

    if(ai==-1)
    {
        cout<<"NO"<<endl;
        return;
    }

    int l=ai,r=ai;

    for(int i=1; i<s.length(); i++)
    {
        if(l-1>=0 && s[l-1]-97==i)
        {
            l--;
        }
        else if(r+1<s.length() && s[r+1]-97==i)
        {
            r++;
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }



    cout<<"YES"<<endl;

}


int main()
{
    faster

    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++)solve(tc);

    //solve(1);



    return 0;
}


