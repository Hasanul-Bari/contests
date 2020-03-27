#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n;
    cin>>n;

    int a[n],s=0,s1;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        s=s+a[i];
    }

    int t=(s/2)+1,c=0;
    s1=a[0];
    //cout<<t<<endl;
    if(s1>=t)
    {
        cout<<1<<endl<<1<<endl;
        return 0;
    }

    vector<int> v;

    for(int i=1; i<n; i++)
    {
        if(2*a[i]<=a[0])
        {
            s1=s1+a[i];
            v.push_back(i+1);

        }

        if(s1>=t)
        {
            c=1;
            break;
        }
    }


    if(c==1)
    {
        cout<<v.size()+1<<endl;
        cout<<1<<" ";

        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
    else
        cout<<0<<endl;






    return 0;
}
