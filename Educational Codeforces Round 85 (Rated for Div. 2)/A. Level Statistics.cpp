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
    int t,n,p,c,tp,tc;


    cin>>t;

    while(t--)
    {
        cin>>n;

        bool hp=true;

        for(int i=0; i<n; i++)
        {
            cin>>p>>c;


            if(i!=0)
            {
                if(tp<=p && tc<=c && p>=c &&  (p-tp)>=(c-tc) )
                {
                    //cout<<"Y"<<endl;
                }
                else
                    hp=false;



            }
            else if(p<c)
                hp=false;

            tp=p;
            tc=c;

        }

        if(hp==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }







    return 0;
}
