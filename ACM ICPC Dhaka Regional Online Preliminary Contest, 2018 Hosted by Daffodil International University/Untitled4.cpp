#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=0; k<t; k++)
    {
        int n;
        cin>>n;
        cout<<"Case "<<k+1<<": "<<endl;


            for(int j=0; j<n-1; j++)
            {
                int u,v;
                cin>>u>>v;
                if(u>v)

                    cout<<u<<" "<<v<<endl;
                else
                    cout<<v<<" "<<u<<endl;
            }


    }

    return 0;
}
