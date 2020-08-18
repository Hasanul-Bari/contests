#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;




int main()
{
    faster
    int  n,x=0,i=1,nn,j=10;
    cin>>n;

    nn=n;


    while(n!=0)
    {

        cout<<n/10<<endl;


        x=(n%10)*i+x;


        int num=(n/10)*i;
        cout<<"i = "<<x/j<<endl;
        cout<<"num = "<<num<<endl;

        i=i*10;

        cout<<"x = "<<x<<endl;


        n=n/10;
    }







    return 0;
}
