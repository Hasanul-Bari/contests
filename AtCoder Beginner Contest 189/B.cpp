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

    double x,v,p,s=0.0;

    int n;
    cin>>n>>x;

    int k=-1;
    bool hp=false;

    for(int i=0; i<n; i++)
    {
        cin>>v>>p;

        double z=v*p;

        s=s+z;

        if(s>x*100 && hp==false)
        {
            k=i+1;
            hp=true;
        }

        //cout<<(ll)s<<endl;


    }

    cout<<k<<endl;






    return 0;
}

