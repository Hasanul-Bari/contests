#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster


    int n,x;
    cin>>n;


    int max=0;
    int c=0;


    for(int i=1; i<=n; i++)
    {
        cin>>x;
        if(x>max)
            max=x;

        if(max==i)
        {
            c++;
            //cout<<i<<" "<<x<<endl;
        }


        //cout<<c<<" "<<i<<endl;

    }

    cout<<c<<endl;



    return 0;
}
