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

    int n;
    cin>>n;

    int a[n],b[n];

    vector<int> s,t;


    for(int i=0; i<n; i++)
        cin>>a[i];


    for(int i=0; i<n; i++)
    {
        cin>>b[i];
        if(a[i]>=b[i])
        {
            t.pb(a[i]-b[i]);
        }
        else
        {
            s.pb(b[i]-a[i]);
        }
    }


    sort(t.begin(),t.end());
    sort(s.begin(),s.end());

    ll tt=t.size(), ss=s.size();
    ll sum=0;

    /*for(int i=0; i<tt; i++)
    {
        int p=lower_bound(s.begin(),s.end(),t[i])-s.begin();



        if(p<ss)
        {
            if(s[p]==t[i])
                p--;

            if(p<0)
                p=0;
        }

        //cout<<"p = "<<p<<endl;

        sum=sum+p;
    }*/



    ll summ=0;

    ll p=upper_bound(t.begin(),t.end(),0)-t.begin();
    p=tt-p;
    if(p<0)
        p=0;

    ll z=tt-p;


    //cout<<"ppp "<<p<<endl;


    //cout<<"sum "<<sum<<endl;

    summ=summ+((p-1)*p)/2;
    summ=summ+ (z*p);

    //cout<<summ+sum<<endl;



    for(int i=0; i<ss; i++)
    {
        int p=upper_bound(t.begin(),t.end(),s[i])-t.begin();


        p=tt-p;

        if(p<0)
            p=0;



        //cout<<"p = "<<p<<endl;

        sum=sum+p;

    }

    cout<<summ+sum<<endl;






    return 0;
}

/*

6
4 8 3 10 2 2
4 5 6 5 2 10

*/
