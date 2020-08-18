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
    int s=0;

    ll a[n];
    double f[n];
    for(int i=0; i<n; i++)
    {
        cin>>f[i];
        a[i]=(ll)(f[i]);
        s=s+a[i];

    }

    //cout<<s<<endl;



    for(int i=0; i<n; i++)
    {
        if(s==0)
            cout<<a[i]<<endl;
        else if(s>0)
        {
            if(f[i]*100000<=0 && (a[i]*100000)!=(f[i]*100000))
            {
                cout<<a[i]-1<<endl;
                s--;
            }
            else
                cout<<a[i]<<endl;

        }
        else if(s<0)
        {
            if(f[i]*100000>=0 && (a[i]*100000)!=(f[i]*100000))
            {
                //cout<<"hp"<<endl;
                cout<<a[i]+1<<endl;
                s++;
            }
            else
                cout<<a[i]<<endl;

        }

    }




    return 0;
}
