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

        if(n==1)
        {
            cout<<9;
        }
        else if(n==2)
        {
            cout<<98;
        }
        else
        {

            cout<<98;

            int x=9;

            for(int i=0; i<n-2; i++)
            {


                cout<<x;
                x++;

                if(x==10)
                    x=0;



            }
        }



        cout<<endl;
    }




    return 0;
}
