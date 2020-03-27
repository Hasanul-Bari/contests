#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }

    sort(a,a+n);
    int x,y;
    int max=a[n-2];
    int min=a[0];

    x=max-min;

    max=a[n-1];
    min=a[1];
    y=max-min;

    if(x<y)
        cout<<x<<endl;
    else
        cout<<y<<endl;


    return 0;


}
