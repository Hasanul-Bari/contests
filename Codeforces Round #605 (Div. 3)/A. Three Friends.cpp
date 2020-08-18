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

    int a[3];

    int q;
    cin>>q;

    while(q--)
    {
        cin>>a[0]>>a[1]>>a[2];

        sort(a,a+3);



        int x=(a[1]-a[0])+(a[2]-a[1])+(a[2]-a[0]);


        //cout<<x<<endl;
        if(x!=0)
        {
            x=x-4;
        }

        if(x<0)
            x=0;

        cout<<x<<endl;
    }




    return 0;
}
