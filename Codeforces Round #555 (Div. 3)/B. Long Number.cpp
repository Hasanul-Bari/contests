#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n;
    string s,h;

    char f[10];

    cin>>n>>s;

    for(int i=1; i<=9; i++)
        cin>>f[i];

    int c=0;

    for(int i=0; i<n; i++)
    {
        int x=s[i]-48;
        //cout<<s[i]<<" "<<f[x]<<endl;
        if(s[i]<f[x] )
        {
              s[i]=f[x];
              c=1;

        }
        else if(s[i]>f[x] && c==1)
        {
            break;
            //h=h+s[i];
        }



    }

    cout<<s<<endl;




    return 0;
}
