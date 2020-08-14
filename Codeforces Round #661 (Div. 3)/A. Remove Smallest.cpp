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

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a,a+n);

        bool hp=true;

        for(int i=1; i<n; i++)
        {
            if(a[i]-a[i-1]>=2 )
            {
                hp=false;
                break;
            }
        }


        if(hp==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;



    }




    return 0;
}
