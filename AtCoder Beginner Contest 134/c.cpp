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

    int a[n],b[n];

    int max1,max2,j;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        b[i]=a[i];

        if(i==0)
        {
            max1=a[i];
            j=i;
        }
        else
        {
            if(a[i]>max1)
            {
                max1=a[i];
                j=i;
            }

        }
    }

    b[j]=-1;

    for(int i=0; i<n; i++)
    {

        if(i==0)
        {
            max2=b[i];
        }
        else
        {
            if(b[i]>max2)
            {
                max2=b[i];
            }

        }
    }

    for(int i=0; i<n; i++)
    {
        if(i==j)
            cout<<max2<<endl;
        else
            cout<<max1<<endl;


    }







    return 0;
}
