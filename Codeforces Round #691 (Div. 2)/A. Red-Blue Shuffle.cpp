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

    int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;

        string s1,s2;

        cin>>s1>>s2;

        int r=0,b=0;
        for(int i=0; i<n; i++)
        {
            if(s1[i]>s2[i])
                r++;
            else if(s1[i]<s2[i])
                b++;
        }

        if(r>b)
            cout<<"RED"<<endl;
        else if(b>r)
            cout<<"BLUE"<<endl;
        else
            cout<<"EQUAL"<<endl;


    }




    return 0;
}
