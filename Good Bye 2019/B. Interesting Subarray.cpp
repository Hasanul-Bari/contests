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

    int t,n,x;

    cin>>t;

    while(t--)
    {
        cin>>n;

        int p=-1,q=-1,tmp;

        for(int i=0; i<n; i++)
        {
            cin>>x;

            if(i!=0)
            {
                if(abs(tmp-x)>=2)
                {
                    p=i;
                    q=i+1;
                }
            }

            tmp=x;

        }

        if(p==-1 && q==-1)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl<<p<<" "<<q<<endl;
        }
    }




    return 0;
}
