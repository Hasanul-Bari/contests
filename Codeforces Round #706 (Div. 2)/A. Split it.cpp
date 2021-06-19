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

    int t,n,k;
    cin>>t;

    string s;

    while(t--)
    {
        cin>>n>>k>>s;

        if(k*2==n)
        {
            cout<<"NO"<<endl;
        }
        else
        {

            int c=0;

            for(int i=0; i<k; i++)
            {
                if(s[i]==s[n-1-i])
                    c++;
            }

            if(c==k)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }
    }




    return 0;
}
