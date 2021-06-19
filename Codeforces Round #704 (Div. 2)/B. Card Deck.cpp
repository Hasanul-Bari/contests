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

        int a[n];

        int cm;

        vector<int> v;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];

            if(i==0)
            {
                cm=a[i];
                v.pb(i);
            }
            else if(a[i]>cm)
            {
                cm=a[i];
                v.pb(i);
            }
        }

        /*for(int i=v.size()-1; i>=0; i--)
        {
            cout<<v[i]<<" "<<a[v[i]]<<endl;
        }*/

        //cout<<"--"<<endl;

        int j=v.size()-1;
        int s=v[j], e=n;

        for(int i=0; i<n; i++)
        {
            cout<<a[s]<<" ";
            s++;
            if(s==e)
            {
                j--;
                s=v[j];
                e=v[j+1];
            }
        }

        cout<<endl;

    }




    return 0;
}




