#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n,m,x;
    cin>>n>>m;

    string s[n];

    for(int i=0; i<n; i++)
        cin>>s[i];

    int aa,b,c,d,e,ss=0;

    for(int i=0; i<m; i++)
    {
        cin>>x;
        aa=0,b=0,c=0,d=0,e=0;
        for(int j=0; j<n; j++)
        {
            if(s[j][i]=='A')
                aa++;
            else if(s[j][i]=='B')
                b++;

            else if(s[j][i]=='C')
                c++;

            else if(s[j][i]=='D')
                d++;

            else if(s[j][i]=='E')
                e++;

        }

        int y=max(aa,max(b,max(c,max(d,e))));

        ss=ss+(x*y);


    }

    cout<<ss<<endl;





    return 0;
}
