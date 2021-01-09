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

    int t,n,x,a;
    cin>>t;

    while(t--)
    {
        cin>>n>>x;

        ll s=0,s2=0;

        for(int i=0; i<n; i++)
        {
            cin>>a;

            s=s+a;

            s2=s2+(a/x);

            if(a%x!=0)
                s2++;

        }


        if(s%x!=0)
            s=(s/x)+1;
        else
            s=(s/x);


        cout<<s<<" "<<s2<<endl;





    }




    return 0;
}
