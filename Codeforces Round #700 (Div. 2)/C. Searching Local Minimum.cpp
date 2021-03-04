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

    int l=1,h=n;
    int ans;

    while(l<=h)
    {

        int mid=(l+h)/2;
        int x,lf,rr;

        if(mid+1==n+1 && mid-1==0)
        {
            ans=mid;
            break;
        }
        if(mid+1==n+1)
        {
            cout<<"? "<<mid<<endl;
            cin>>x;
            cout<<"? "<<mid-1<<endl;
            cin>>lf;

            if(x<lf)
            {
                ans=mid;
                break;
            }
            else
            {
                h=mid-1;
            }

        }
        else if(mid-1==0)
        {
            cout<<"? "<<mid<<endl;
            cin>>x;
            cout<<"? "<<mid+1<<endl;
            cin>>rr;

            if(x<rr)
            {
                ans=mid;
                break;
            }
            else
            {
                l=mid+1;
            }
        }
        else
        {

            cout<<"? "<<mid<<endl;
            cin>>x;
            cout<<"? "<<mid-1<<endl;
            cin>>lf;
            cout<<"? "<<mid+1<<endl;
            cin>>rr;

            if(x<lf && x<rr)
            {
                ans=mid;
                break;
            }
            else if(x>lf)
            {
                h=mid-1;
            }
            else if(x>rr)
            {
                l=mid+1;
            }
        }



    }

    cout<<"! "<<ans<<endl;






    return 0;
}
