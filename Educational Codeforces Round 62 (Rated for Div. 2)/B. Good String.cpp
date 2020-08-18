#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster


    int n,t;
    string s;
    cin>>t;
    while(t--)
    {

        cin>>n>>s;
        bool hp=false;

        int a=0,b=n-1;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='>' && hp==false)
            {
                a=i;
                hp=true;
            }

            if(s[i]=='<')
            {
                b=i;

            }
        }
        b=(n-1)-b;

        //cout<<a<<" "<<b<<endl;

        cout<<min(a,b)<<endl;
    }



    return 0;
}

