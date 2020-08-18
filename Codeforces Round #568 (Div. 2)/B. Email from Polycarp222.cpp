#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int k;
    string s,t;
    cin>>k;
    while(k--)
    {


        cin>>s>>t;

        int x=t.length();
        int y=s.length();

        int i=0,j=0;
        while(1)
        {
            if(s[j]!=t[i])
            {
                i++;
            }
            else
            {
                i++;
                j++;
            }

            if(i==x)
                break;
        }


        if(j!=y)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;



    }




    return 0;
}

