#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

bool ok(string ans)
{
    stack<char> st;

    for(int i=0; i<ans.size(); i++)
    {
        if(ans[i]=='(')
            st.push('(');
        else
        {
            if(!st.empty())
            {
                st.pop();
            }
            else
                return false;

        }
    }

    return st.empty();
}

int main()
{
    faster

    int t,tc=1,n;
    cin>>t;


    while(t--)
    {
        cin>>n;
        int a[n];

        map<int,int> m;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }

        bool f=true;
        string ans;

        int curr=1,cnt=n;
        ans.pb('(');


        if(m[curr]==0)
            f=false;

        cnt--;



        while(cnt--)
        {
            m[curr]--;

            if(m[curr+1]>0)
            {
                curr=curr+1;
                ans.pb('(');

            }
            else if(m[curr-1]>0)
            {
                curr=curr-1;
                ans.pb(')');

            }
            else
            {
                f=false;
                break;
            }

        }

        //cout<<ans<<endl;





        if(f==true && ok(ans))
        {
            cout<<"Case "<<tc<<": "<<ans<<endl;
        }
        else
        {
            cout<<"Case "<<tc<<": invalid"<<endl;

        }
        tc++;




    }




    return 0;
}
