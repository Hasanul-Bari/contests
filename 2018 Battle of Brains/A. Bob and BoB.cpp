#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a,b,c,d;
    cin>>t;
    for(int i=1; i<=t; i++)
    {

        cin>>n>>a>>b>>c>>d;

        n=ceil(((double)(n)+1.0)/2.0);

        //cout<<n<<endl;

        if(n<=(a+b+c+d))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }

    return 0;

}
