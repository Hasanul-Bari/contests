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

    int n;
    cin>>n;

    string s;

    int a=0,w=0,t=0,r=0;

    while(n--)
    {
        cin>>s;

        if(s=="AC")
            a++;
        else if(s=="WA")
            w++;
        else if(s=="TLE")
            t++;
        else
            r++;


    }

    cout<<"AC x "<<a<<endl;
    cout<<"WA x "<<w<<endl;
    cout<<"TLE x "<<t<<endl;
    cout<<"RE x "<<r<<endl;





    return 0;
}
