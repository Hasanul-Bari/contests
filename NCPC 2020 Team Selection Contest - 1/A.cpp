#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int a[1000008];

int main()
{
    faster

    int n;
    string s;

    cin>>n>>s;

    stack<int> st;

    int x=s.length();

    int z=0,t=-1;

    for(int i=0; i<x; i++)
    {

        //cout<<s[i]<<" ---"<<endl;

        if(isdigit(s[i]))
        {
            z=(z*10)+(s[i]-'0');
        }

        else
        {

            if(z!=0)
            {
                st.push(z);
                z=0;
            }

            if(s[i]==')')
            {
                int t1=st.top();
                st.pop();

                int t2=st.top();
                //st.pop();

                a[t1]=t2;

                //st.push(t2);

            }
        }

    }

    for(int i=1; i<=n; i++)
        cout<<a[i]<<" ";
    cout<<endl;



    return 0;
}
