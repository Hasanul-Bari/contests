#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n;
    cin>>n;



    int x,c=0,s=0,temp;

    cin>>x;
    temp=x;
    if(x==2)
        s=s+3;
    else if(s==3)
        s=s+4;

    for(int i=1; i<n; i++)
    {
        cin>>x;

        if(x==2)
            s=s+3;
        else if(x==3)
            s=s+4;


        if(temp==2 || temp==3)
        {
            if(x==2)
                c=1;
            else if(x==3)
                c=1;

        }

        temp=x;
    }

    if(c==1)
    {
        cout<<"Infinite"<<endl;
    }
    else
    {
        cout<<"Finite"<<endl;
        cout<<s<<endl;
    }




    return 0;
}
