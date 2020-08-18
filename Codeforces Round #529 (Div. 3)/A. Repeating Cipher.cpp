#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s,h;
    cin>>s;
    h=h+s[0];
    int c=1;
    for(int i=2; c<s.length(); i++)
    {

        h=h+s[c];
        c=c+i;
    }
    cout<<h<<endl;

    return 0;
}
