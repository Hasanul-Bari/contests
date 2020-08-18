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

    ll t,n,k=1;

    cin>>t;


    while(t--)
    {
        cin>>n;

        int a[n][n];

        ll tc=0,r=0,c=0;

        set<int> s;

        for(int i=0; i<n; i++)
        {

            for(int j=0; j<n; j++)
            {
                cin>>a[i][j];

                if(i==j)
                    tc=tc+a[i][j];


                s.insert(a[i][j]);

            }

            if(s.size()!=n)
                r++;

            s.clear();
        }


        for(int i=0; i<n; i++)
        {

            for(int j=0; j<n; j++)
            {

                s.insert(a[j][i]);

            }

            if(s.size()!=n)
                c++;

            s.clear();
        }



        cout<<"Case #"<<k<<": "<<tc<<" "<<r<<" "<<c<<endl;
        k++;
    }




    return 0;
}
