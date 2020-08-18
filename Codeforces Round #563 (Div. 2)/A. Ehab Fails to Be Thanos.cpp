#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n;
    cin>>n;
    int nn=n*2;
    int a[nn+2];
    for(int i=1; i<=nn; i++)
        cin>>a[i];

    int c=0;
    for(int i=1; i<nn; i++)
    {
        if(a[i]!=a[2*i])
        {
            swap(a[i],a[2*i]);
            c=1;
            break;
        }
    }

    if(c==0)
        cout<<-1<<endl;
    else
    {
        for(int i=1; i<=nn; i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }








    return 0;
}
