#include<iostream>
using namespace std;

void bs(int a[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                int tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    bs(a,n);

    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}
