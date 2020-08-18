#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n;
    string s;
    cin>>n>>s;

    int l,r,c=0;

    for(int i=1; i<n; i++)
    {
        if(s[i-1]>s[i])
        {
            l=i;
            r=i+1;
            c=1;
            break;
        }
    }

    if(c==1)
    {
        cout<<"YES"<<endl;
        cout<<l<<" "<<r<<endl;
    }
    else
        cout<<"NO"<<endl;




    return 0;
}
