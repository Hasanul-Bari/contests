#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a[t];
   for(int i=0; i<t; i++)
        cin>>a[i];

    for(int i=0; i<t; i++)
    {
        int x;

        if(a[i]%2==0)
            x=a[i]/2;
        else if(a[i]==3)
            x=1;

        else
            x=(((a[i]+1)/2)-3)+1;

        cout<<x<<endl;

    }
    return 0;


}
