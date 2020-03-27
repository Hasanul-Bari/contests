#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long s;
    cin>>n>>s;
    long long a[n],sum=0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }

    if(sum<s)
    {
        cout<<-1<<endl;
        return 0;
    }

    sort(a,a+n);

    for(int i=0; i<n; i++)
    {
        while(a[i]>a[0])
        {
            a[i]--;

        }
    }


}
