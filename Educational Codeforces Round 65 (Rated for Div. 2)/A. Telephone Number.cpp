#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;

        int c=0;
        if(n>=11)
        {


            for(int i=0; i<=n-11; i++)
            {
                if(s[i]=='8')
                    c=1;
            }
            if(c==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }




    return 0;
}
