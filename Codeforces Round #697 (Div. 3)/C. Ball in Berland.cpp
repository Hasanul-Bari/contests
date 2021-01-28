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

    int t,a,b,k;

    cin>>t;

    while(t--)
    {
        cin>>a>>b>>k;

        int aa[k],bb[k];

        map<int,int> ma,mb;

        for(int i=0; i<k; i++)
        {
            cin>>aa[i];
            ma[aa[i]]++;
        }

        for(int i=0; i<k; i++)
        {
            cin>>bb[i];
            mb[bb[i]]++;
        }

        ll s=0;
        for(int i=0; i<k; i++)
        {
            s=s+(k-1-( (ma[aa[i]]-1)+(mb[bb[i]]-1) ) );
        }

        cout<<s/2<<endl;
    }


    return 0;
}

