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

    int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;

        int c=(n/2);


        for(int i=0; i<c; i++)
        {
            if(i==0)
            {
                if(n%2==0)
                    cout<<1;
                else
                    cout<<7;
            }
            else
                cout<<1;
        }
        cout<<endl;


    }




    return 0;
}
