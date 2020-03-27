#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,h;
    cin>>s;

    int c=0;
    for(int i=0; i<5; i++)
    {
        cin>>h;
        if(h[0]==s[0] || h[1]==s[1])
            c=1;
    }

    if(c==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
