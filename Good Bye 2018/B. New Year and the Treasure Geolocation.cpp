#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y;
    cin>>n;
    map<int,int> m1,m2,ans;
    map<int,int> :: iterator it1, it2;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        m1[x]=y;
    }

    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        m2[x]=y;
    }

    for(it1=m1.begin(); it1!=m1.end(); it1++)
    {
        for(it2=m2.begin(); it2!=m2.end(); it2++)
        {
            int a=it1->first+it2->first;
            int b=it1->second+it2->second;

            cout<<a<<" "<<b<<endl;
        }
    }


}
