#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long a,b,i=1,ans=1;

    for(int j=0; j<n; j++)
    {
        cin>>a>>b;
        if(i==0)
            i=1;
        if(i<=a && i<=b)
        {
            while(i<=a && i<=b)
            {
                i++;
                ans++;
                //cout<<"**"<<endl;
            }

        }
        else
            i=max(a,b);


    }

    cout<<ans<<endl;
    return 0;

}
