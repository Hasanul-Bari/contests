#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,b,c,p;
    cin>>n;
    vector<long long> v;
    vector<long long> :: iterator it;

    for(long long i=1; i<=n; i++)
    {
        if(i%3!=0 && i<=n)
        {
            v.push_back(i);
        }
    }

    /*for(it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" ";
    }

    cout<<endl;*/

    for(long long i=0; i<v.size(); i++)
    {
        for(long long j=0; j<v.size(); j++)
        {
            for(long long k=0; k<v.size(); k++)
            {
                if(n==v[i]+v[j]+v[k])
                {
                    a=v[i];
                    b=v[j];
                    c=v[k];
                    break;

                }
            }
        }
    }

    cout<<a<<" "<<b<<" "<<c<<endl;

    return 0;




}
