#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        memset(a,0,sizeof(a));
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        int flag = 1;
        for(int i=1; i<n; i++)
        {
            if((a[i]-a[i-1]==1)||(a[i]-a[i-1])%2!=0)
            {
                flag = 0;
                cout<<"no"<<endl;
                break;
            }
        }
        if(flag)
            cout<<"yes"<<endl;
    }
    return 0;
}
