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

    int t,x;
    cin>>t;

    while(t--)
    {
        cin>>x;

        int z=9;
        string s="";
        while(x>=0)
        {
            if(x-z>=0)
            {
                x=x-z;
                //cout<<"z "<<z<<endl;
                s=s+to_string(z);
            }

            z--;

            if(x==0)
                break;

            if(z==0)
                break;
        }

        //cout<<"x "<<x<<endl;

        if(x!=0)
            cout<<-1<<endl;
        else
        {
            sort(s.begin(),s.end());

            cout<<s<<endl;
        }



    }




    return 0;
}
