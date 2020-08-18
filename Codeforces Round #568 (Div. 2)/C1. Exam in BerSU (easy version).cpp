#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n,m;
    cin>>n>>m;

    int a[n];
    int s=0,x;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        a[i]=x;
        s=s+x;
        //cout<<"s "<<s<<endl;
        int ss=s;
        if(ss<=m)
        {
            cout<<0<<" ";
        }
        else
        {
            sort(a,a+i);
            int c=0;
            for(int j=i-1; j>=0; j--)
            {
                //cout<<ss<<" -- "<<a[j]<<endl;
                ss=ss-a[j];

                c++;
                if(ss<=m)
                    break;
            }

            cout<<c<<" ";
        }
    }
    cout<<endl;







    return 0;
}
