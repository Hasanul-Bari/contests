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

    int t,n,s,k,x;
    cin>>t;

    while(t--)
    {
        cin>>n>>s>>k;

        int a[k];

        bool hp=false;

        for(int i=0; i<k; i++)
        {
            cin>>a[i];



        }

        sort(a,a+k);

        int p=lower_bound(a,a+k,s)-a;

        if(a[p]==s)
        {

        }
        else
            cout<<0<<endl;









    }




    return 0;
}
