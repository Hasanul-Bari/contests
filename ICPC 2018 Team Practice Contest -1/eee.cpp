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
    for(int i=0;i<n;i++)
    {
if(arr[i]+arr[x-1-i]>max)max=arr[i]+arr[x-1-i];

    }
    cout<<max<<endl;
    }

    return 0;

}
