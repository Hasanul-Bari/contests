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

    ll n,m,k;

    cin>>n>>m>>k;


    ll a[n],b[m],c=0;

    for(int i=0; i<n; i++)
        cin>>a[i];


    for(int i=0; i<m; i++)
        cin>>b[i];


    for(int i=0, j=0;  ; )
    {
        if(i<n && j<m)
        {
            if(a[i]<=b[j])
            {
                if(k-a[i]>=0)
                    k=k-a[i],c++,i++;
                else
                    break;
            }
            else
            {
                if(k-b[j]>=0)
                    k=k-b[j],c++,j++;
                else
                    break;
            }
        }
        else if(i<n)
        {
            if(k-a[i]>=0)
                k=k-a[i],c++,i++;
            else
                break;
        }
        else if(j<m)
        {
            if(k-b[j]>=0)
                k=k-b[j],c++,j++;
            else
                break;
        }
        else
            break;

        //cout<<k<<endl;
    }

    cout<<c<<endl;






    return 0;
}


