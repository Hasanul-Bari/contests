#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s;
    vector<int> v;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++)
    {
        s=0;
        for(int j=0; j<n; j++)
        {
            int x=(abs(i-j))+(abs(j-0))+(abs(i-0));
            int y=(x*2)*a[j];
            //cout<<y<<" * "<<endl;

            s=s+y;
        }
        v.push_back(s);
    }
    sort(v.begin(),v.end());

    /*for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";*/

    cout<<v[0]<<endl;
    return 0;
}
