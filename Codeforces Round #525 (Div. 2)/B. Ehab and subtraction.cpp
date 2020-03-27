#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    long long a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int j=0; j<k; j++)
    {


        long long min=a[0];
        int k=0;
        while(a[k]==0)
        {
            k++;
            min=a[k];
        }
        for(int i=1; i<n; i++)
        {
            if(a[i]<min && a[i]!=0)
                min=a[i];
        }

        for(int i=0; i<n; i++)
        {
            if(a[i]!=0)
                a[i]=a[i]-min;
        }
        int c=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]!=0)
            {
                c=1;
            }
        }
        if(c==0)
            min=0;

        cout<<min<<endl;
    }


    return 0;




}
