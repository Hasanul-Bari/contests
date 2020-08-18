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

    int n;
    cin>>n;

    int r[n],b[n];


    for(int i=0; i<n; i++)
        cin>>r[i];

    for(int i=0; i<n; i++)
        cin>>b[i];


    int rr=0,bb=0,c=0;

    for(int i=0; i<n; i++)
    {
        if(r[i]==b[i])
            c++;
        else
        {
            if(r[i]==1)
                rr++;

            if(b[i]==1)
                bb++;
        }
    }


    if(rr==0)
        cout<<-1<<endl;

    else if(rr>bb)
        cout<<1<<endl;
    else if(rr<=bb)
    {
        int x=bb+1,z;

        if(x%rr==0)
            z=(x/rr);
        else
            z=(x/rr)+1;

        cout<<z<<endl;
    }






    return 0;
}
