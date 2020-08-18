#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n,x;
    string s;
    cin>>n>>s;

    int o=0,z=0,y=s.length();

    for(int i=0; i<y; i++)
    {
        if(s[i]=='1')
            o++;
        else
            z++;
    }

    if(z==o)
    {
        cout<<2<<endl;
        cout<<s[0]<<" ";
        for(int i=1; i<y; i++)
            cout<<s[i];
        cout<<endl;
    }
    else
        cout<<1<<endl<<s<<endl;





    return 0;
}
