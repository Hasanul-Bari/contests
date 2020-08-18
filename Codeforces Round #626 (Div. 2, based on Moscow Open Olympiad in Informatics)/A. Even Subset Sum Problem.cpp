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

    int t,n,x;
    cin>>t;

    while(t--)
    {
        cin>>n;
        int e=-1,o1=-1,o2=-1;

        for(int i=1; i<=n; i++)
        {
            cin>>x;
            if(x%2==0)
                e=i;
            else
            {
                if(o1==-1)
                    o1=i;
                else
                    o2=i;
            }
        }



        if(e!=-1)
        {
            cout<<1<<endl<<e<<endl;
        }
        else if(o1>=1 && o2>=1)
        {
            cout<<2<<endl<<o1<<" "<<o2<<endl;
        }
        else
            cout<<-1<<endl;


    }




    return 0;
}
