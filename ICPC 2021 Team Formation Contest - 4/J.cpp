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

    ll s[n+1],x[n+1];

    s[0]=0;


    for(int i=1; i<=n; i++)
    {
        cin>>x[i];
        s[i]=s[i-1]+x[i];
    }
    int id=-1,d;
    for(int i=0,j=1; j<=n; )
    {
        if(s[j]-s[i]==0)
        {
            id=j;
            //d=j-i;
            break;
        }
        else if(s[j]-s[i]>0)
        {
            i++;
        }
        else
            j++;
    }


    if(id==-1)
        cout<<-1<<endl;
    else
    {

        int c=0;
        ll ss=0;
        for(int i=id; i>=0; i--)
        {
            ss=ss+x[i];

            c++;
            if(ss==0)
                break;

        }
        cout<<id<<" "<<c<<endl;
    }







    return 0;
}

