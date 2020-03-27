#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int h=0; h<t; h++)
    {
        int n,x,s1,s2;
        cin>>n;
        s1=0;
        s2=0;
        for(int i=1; i<=n; i++)
        {
            cin>>x;
            if(i%2==0)
                s1=s1+x;
            else
                s2=s2+x;
        }


        for(int i=1; i<=n; i++)
        {
            cin>>x;
            if(i%2==0)
                s2=s2+x;
            else
                s1=s1+x;
        }
        //cout<<s1<<" "<<s2<<endl;
        cout<<min(s1,s2)<<endl;
    }

    return 0;
}
