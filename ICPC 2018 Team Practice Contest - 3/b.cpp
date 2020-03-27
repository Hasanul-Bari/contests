#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        long long m;
        cin>>n>>m;

        long long *a=new long long [n];

        for(int l=0; l<n; l++)
        {
            cin>>a[l];
        }

        int hp,k;
        for(int l=0; l<n; l++)
        {
            if(a[l]!=-1)
            {
                hp=a[l];
                k=l;
                break;
            }

        }

        for(int l=k; l<n-1; l++)
        {
           a[l+1]=(a[l]+1)%m;
        }

        for(int l=k-1; l>=0; l--)
        {
           a[l]=(((a[l+1]-1)%m)+m)%m;
        }


        for(int l=0; l<n-1; l++)
        {
           cout<<a[l]<<" ";
        }
        cout<<a[n-1]<<endl;





    }
}
