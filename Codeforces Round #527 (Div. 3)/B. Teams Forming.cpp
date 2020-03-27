#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    int s=0;
    for(int i=0; i<v.size()-1; i=i+2)
    {
        s=s+(v[i+1]-v[i]);
    }
    cout<<s<<endl;
    return 0;
}
