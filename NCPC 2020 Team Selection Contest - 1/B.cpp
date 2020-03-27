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

    int z=0;


    int i=0;
    while(i<x)
    {
        if(isdigit(s[i]))
        {
            z=(z*10)+(s[i]-'0');
        }
        else
            break;

        cout<<s[i]<<endl;

        i++;
    }


    st.push(z);
    z=0;

    for( ; i<x; i++)
    {
        if(isdigit(s[i]))
        {
            z=(z*10)+(s[i]-'0');
        }
        else
        {
            st.push(z);
            z=0;
        }


        if(s[i]==')')
        {
            int t=st.top();

            a[z]=t;
            st.push(z);
            z=0;
        }




    }

    for(int i=1; i<=n; i++)
        cout<<a[i]<<" ";
    cout<<endl;



    return 0;
}
