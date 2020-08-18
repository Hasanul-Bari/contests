#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n;
    string s;
    cin>>n>>s;
    string g="ACTG";
    int sum,m=INT_MAX;

    for(int i=0; i<=s.length()-4; i++)
    {
        sum=0;
        for(int j=0; j<4; j++ )
        {
            int x=min(abs(s[i+j]-g[j]),26-abs(s[i+j]-g[j]));
            sum=sum+x;
            //cout<<"x = "<<x<<endl;


        }
        //cout<<sum<<endl;
        if(sum<m)
            m=sum;


    }

    cout<<m<<endl;




    return 0;
}
