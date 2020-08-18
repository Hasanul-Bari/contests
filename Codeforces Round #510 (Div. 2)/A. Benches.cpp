#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int *a=new int [n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int c=a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]>=c)
            c=a[i];
    }

    int k2=m+c;


    sort(a,a+n);

    /*for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }*/


    int i=0;

    while(m!=0)
    {
       a[i]=a[i]+1;
       i++;
       m--;
       if(i==n)
            i=0;
    }

    /*for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }*/

    int ma=a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]>=ma)
            ma=a[i];
    }

    cout<<ma<<" "<<k2<<endl;

    return 0;

}
