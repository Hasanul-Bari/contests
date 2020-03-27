#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }


    int c=1,ans=c,chk=a[0],max=0;
    for(int i=1; i<n; i++)
    {
        if(a[i]-chk<=5)
            c++;
        else
        {
            ans=c;
            chk=a[i];
            c=1;
        }

        cout<<c<<" * "<<a[i]<<endl;

    }

    if(ans<c)
        ans=c;

    cout<<ans<<endl;

    return 0;
}



