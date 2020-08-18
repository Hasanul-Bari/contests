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

    int t,n,k,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>d;

        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];


        int c=0,mx=0;
        map<int,int> m;
        for(int i=0; i<d; i++)
        {
            if(m[a[i]]==0)
            {
                c++;
            }
            m[a[i]]++;

        }

        mx=c;

       // cout<<"c = "<<c<<endl;


        for(int i=d; i<n; i++)
        {
            //cout<<a[i-d]<<" "<<m[a[i-d]]<<endl;
            m[a[i-d]]--;
            if(m[a[i-d]]==0)
                c--;

            //cout<<a[i-d]<<" "<<m[a[i-d]]<<endl;
            if(m[a[i]]==0)
            {
                c++;
            }
            m[a[i]]++;

            //cout<<a[i]<<" "<<m[a[i]]<<endl;

            if(mx>c)
                mx=c;

            //cout<<"c = "<<c<<endl;
        }


        cout<<mx<<endl;


    }






    return 0;
}
