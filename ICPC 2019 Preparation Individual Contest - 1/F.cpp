#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int t,n,x;
    cin>>t;

    string s;

    while(t--)
    {
        cin>>n>>s;
        int e=0,o=0;

        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x%2==0)
                e++
            else
                o++;
        }

        if(s=="Dee")
        {
            for(int i=0; i<n; i++)
            {
                if(i%2==0)
                {
                    if(e>0)
                    {
                        e--;
                    }
                }
            }


        }


    }




    return 0;
}
