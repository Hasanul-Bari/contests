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

        int a[n];

        int neg=n,po=n;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];


            if(a[i]==1 && po==n)
                po=i;
            else if(a[i]==-1 && neg==n)
                neg=i;
        }

        //cout<<po<<" "<<neg<<endl;

        bool hp=true;

        for(int i=0; i<n; i++)
        {
            cin>>x;

            if(x!=a[i])
            {
                if(x>a[i] && po>=i)
                    hp=false;
                else if(x<a[i] && neg>=i)
                    hp=false;
            }


        }

        if(hp==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }






    return 0;
}
