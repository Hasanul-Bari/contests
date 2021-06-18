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

    int t,tc=1;
    cin>>t;

    while(t--)
    {
        ll s[10],x[5];

        ll ss=0;

        for(int i=0; i<10; i++)
        {
            cin>>s[i];
            ss=ss+s[i];
        }

        sort(s,s+10);

        x[2]=(ss/4)-s[0]-s[9];

        //cout<<x[2]<<" **"<<endl;

        x[1]=s[1]-x[2];
        x[0]=s[0]-x[1];

        x[3]=s[8]-x[2];
        x[4]=s[9]-x[3];

        sort(x,x+5);



        cout<<"Case "<<tc<<": ";
        tc++;


        for(int i=0; i<5; i++)
            cout<<x[i]<<" ";
        cout<<endl;

    }




    return 0;
}

