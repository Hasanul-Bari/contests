#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int n;
    cin>>n;

    int a[n],b[n];

    map<int,int> me,mo;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        b[i]=a[i];

        if(i%2==0)
        {
            me[a[i]]++;
        }
        else
        {
            mo[a[i]]++;
        }


    }

    sort(b,b+n);


    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            if(me[b[i]]>0)
            {
                me[b[i]]--;
            }
            else
            {
                cout<<"NO"<<endl;
                return;
            }
        }
        else
        {
            if(mo[b[i]]>0)
            {
                mo[b[i]]--;
            }
            else
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }

    cout<<"YES"<<endl;



}


int main()
{
    faster

    int t; cin>>t; for(int tc=1; tc<=t; tc++)solve(tc);

    //solve(1);



    return 0;
}


