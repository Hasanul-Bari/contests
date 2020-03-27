#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    int q,u,d,l,r;
    string s;
    cin>>q;

    while(q--)
    {
        cin>>s;

        l=0,r=0,u=0,d=0;

        int z=s.length();

        for(int i=0; i<z; i++)
        {
            if(s[i]=='U')
                u++;
            else if(s[i]=='D')
                d++;
            else if(s[i]=='L')
                l++;
            else if(s[i]=='R')
                r++;
        }

        int x=min(l,r), y=min(u,d);


        if(x==0 && y!=0)
            y=1;
        if(y==0 && x!=0)
            x=1;

        cout<<(2*x)+(2*y)<<endl;

        for(int i=0; i<x; i++)
            cout<<'R';
        for(int i=0; i<y; i++)
            cout<<'U';
        for(int i=0; i<x; i++)
            cout<<'L';
        for(int i=0; i<y; i++)
            cout<<'D';

        cout<<endl;

    }




    return 0;
}
