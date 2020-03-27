#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int q,c,m,x;
    cin>>q;

    while(q--)
    {
        cin>>c>>m>>x;

        int mn=min(c,min(m,x));

        c=c-mn;
        m=m-mn;

        if(c<m)
            swap(c,m);

        int mn2=min(c,m);
        int mn3=(c+m)/3;




        cout<<mn+min(mn2,mn3)<<endl;

    }




    return 0;
}

