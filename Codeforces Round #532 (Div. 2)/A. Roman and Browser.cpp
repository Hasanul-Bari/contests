#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,s=0,e=0,x,y;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==1)
            e++;
        else
            s++;
    }

    //cout<<e<<" "<<s<<endl;

    int ans=0,h;
    for(int i=0; i<k; i++)
    {
        x=e;
        y=s;
        for(int j=i; j<n; j=j+k)
        {

            if(a[j]==1)
                x--;
            else
                y--;
        }
        //cout<<x<<" "<<y<<endl;
        //cout<<abs(x-y)<<endl;
        h=abs(x-y);
        if(h>ans)
            ans=h;

    }

    cout<<ans<<endl;
    return 0;

}
