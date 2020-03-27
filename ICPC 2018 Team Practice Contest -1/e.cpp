#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
           int max=0;
    int n;
    cin>>n;
    int x=2*n;
    int arr[x];
    for(int i=0;i<x;i++)cin>>arr[i];
    for(int i=0 , j=x-1;i<n;i++,j--)
    {
        {
            cout<<arr[i]<<" "<<arr[j]<<endl;
            if(arr[i]+arr[j]>max)max=arr[i]+arr[j];
        }

    }
    cout<<max<<endl;
    }

    return 0;

}
