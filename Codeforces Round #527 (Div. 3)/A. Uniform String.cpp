#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    int t;
    cin>>t;
    for(int h=0; h<t; h++)
    {
        cin>>n>>k;
        string s="abcdefghijklmnopqrstuvwxyz";

        vector<char> v;

        for(int i=0,j=0; i<n; i++,j++)
        {
            if(k==j)
                j=0;

            v.push_back(s[j]);


        }
        sort(v.begin(),v.end());

        for(int i=0; i<v.size(); i++)
            cout<<v[i];

        cout<<endl;

    }
    return 0;

}
