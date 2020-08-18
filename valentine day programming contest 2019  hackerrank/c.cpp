#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0,k;
    cin>>n>>k;
    vector<bool> prime(n,true);

    for(long long i=2; i*i<=n; i++)
    {
        if(prime[i]==true)
        {
            for(long long j=i*i; j<=n; j=j+i)
                prime[j]=false;
        }
    }

    vector<int> a;
    for(long long i=2; i<=n; i++)
    {
        if(prime[i]==true)
            a.push_back(i);

    }

    for(int i=0; i<a.size()-1; i++)
    {
        int x=a[i]+a[i+1]+1;
        //cout<<x<<endl;
        if(prime[x]==true && x<=n)
            c++;
    }
    if(c>=k)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;


    //cout<<c<<endl;

    return 0;


}
