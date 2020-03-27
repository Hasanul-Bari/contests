#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    vector <int> :: iterator it;
    int n;
    cin>>n;

    int r;
    cin>>r;
    for(int j=0; j<r; j++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int i=0; i<n; i++)
    {
        int r;
        cin>>r;
        for(int j=0; j<r; j++)
        {
            int x;
            cin>>x;
            it=find(v.begin(),v.end(),x);
        }
    }
}
