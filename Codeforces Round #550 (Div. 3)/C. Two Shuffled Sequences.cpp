#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster

    int n,x,c=0;
    cin>>n;
    map<int,int> m;
    vector<int> f,s;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        m[x]++;
        if(m[x]==1)
        {
            f.push_back(x);
        }
        else if(m[x]==2)
        {
            s.push_back(x);
        }
        else
        {
            c=1;
        }
    }
    if(c==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        sort(f.begin(),f.end());
        int z=f.size();
        cout<<z<<endl;
        for(int i=0; i<z; i++)
            cout<<f[i]<<" ";
        cout<<endl;


        sort(s.begin(),s.end());
        int h=s.size();
        cout<<h<<endl;
        for(int i=h-1; i>=0; i--)
            cout<<s[i]<<" ";
        cout<<endl;



    }




    return 0;
}
