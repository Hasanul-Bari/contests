#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,v,s=0,c=0;
    cin>>n>>v;


    for(int i=1; i<n; i++)
    {
        for(int j=1; j<=v; j++)
        {
            s=s+i;
            c++;
            //cout<<c<<" "<<s<<endl;
            if(c==n-1)
            {
                cout<<s<<endl;
                return 0;
            }
        }
        c--;

    }
    cout<<s<<endl;


    return 0;

}
