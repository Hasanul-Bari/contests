#include<bits/stdc++.h>
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    int n;
    cin>>n;
    ll a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    ll s=a[n-1];
    ll min=s;
    for(int i=n-2; i>=0; i--)
    {
        if(a[i]<min)
        {
            s=s+a[i];
            min=a[i];
        }
        else
        {
            s=s+(min-1);
            min--;
        }


        if(min==0)
            break;

        //cout<<s<<" "<<a[i]<<endl;
    }

    cout<<s<<endl;



    return 0;
}

