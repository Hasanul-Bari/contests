#include<bits/stdc++.h>
using namespace std;
int a[102];
int main()
{

    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int r;
        cin>>r;

        for(int j=0; j<r; j++)
        {
           int x;
           cin>>x;

           if(a[x-1]==i)
           {
               a[x-1]++;
           }

        }
        /*for(int i=0; i<100; i++)
                cout<<a[i]<<" ";
        cout<<endl;*/
    }

    vector <int> p;

    for(int i=0; i<100; i++)
    {
        if(a[i]==n)
            p.push_back(i+1);
    }

    for(int i=0; i<p.size()-1; i++)
    {
        cout<<p[i]<<" ";
    }
    int y=p.size()-1;
    cout<<p[y]<<endl;
    return 0;

}
