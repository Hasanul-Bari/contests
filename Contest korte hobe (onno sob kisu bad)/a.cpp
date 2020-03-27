#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,temp,min,ans,hp,c;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=1; i<=k; i++)
    {
        hp=0,c=0;
        for(int j=0; j<n; j++)
        {
            if(a[j]!=i)
            {
                if(hp==0)
                    hp=1;
                else if(a[j]!=temp)
                    c++;

                temp=a[j];

            }
        }

        if(i==1)
        {
            ans=i;
            min=c;
        }
        else if(min>c)
        {
            ans=i;
            min=c;
        }


        //cout<<c<<endl;
    }

    cout<<ans<<endl;
    return 0;
}
