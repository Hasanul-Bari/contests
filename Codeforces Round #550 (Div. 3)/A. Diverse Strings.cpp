#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster

    int n;
    cin>>n;
    string s;
    while(n--)
    {
        cin>>s;
        sort(s.begin(),s.end());
        //cout<<s<<endl;
        int c=0;
        for(int i=1; i<s.length(); i++)
        {
            int x=s[i-1];
            int y=s[i];
            if(x!=y-1)
            {
                c=1;
                break;
            }
        }

        if(c==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }




    return 0;
}
