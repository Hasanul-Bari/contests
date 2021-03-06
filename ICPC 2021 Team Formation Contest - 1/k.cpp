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

    int n,x;

    cin>>n>>x;

    int a[n];

    map<int,int> m;


    for(int i=0; i<n; i++)
    {
        cin>>a[i];

        m[a[i]]=i+1;
    }

    for(int i=0; i<n; i++)
    {
        if(m[x-a[i]]>0)
        {
            if(i+1!=m[x-a[i]])
            {
                cout<<i+1<<" "<<m[x-a[i]]<<endl;
                return 0;
            }


        }

    }

    cout<<-1<<endl;






    return 0;
}

