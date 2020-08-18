#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    set<char> ss;

    for(int i=0; i<s.length(); i++)
    {
        ss.insert(s[i]);

    }
    int x=ss.size();
    if(n-x>26)
        cout<<-1<<endl;
    else
        cout<<n-x<<endl;

    return 0;



}
