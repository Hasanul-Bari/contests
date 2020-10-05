#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    //faster

    int n;
    cin>>n;

    int a[n+1],x,y,mxi=1;



    for(int i=2; i<=n; i++)
    {
        cout<<"? "<<mxi<<" "<<i<<endl;
        cin>>x;

        cout<<"? "<<i<<" "<<mxi<<endl;
        cin>>y;

        if(x<y)
        {
            a[i]=y;
        }
        else
        {
            a[mxi]=x;
            mxi=i;
        }

    }

    a[mxi]=n;

    cout<<"! ";
    for(int i=1; i<=n; i++)
        cout<<a[i]<<" ";
    cout<<endl;




    return 0;
}
