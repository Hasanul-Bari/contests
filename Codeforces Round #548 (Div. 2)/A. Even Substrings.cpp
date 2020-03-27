#include<bits/stdc++.h>
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    string s;
    int n;
    cin>>n>>s;
    int c=0;
    for(int i=0; i<s.length(); i++)
    {
        int x=s[i]-48;
        if(x%2==0)
        {
            c=c+(i+1);
        }

    }

    cout<<c<<endl;



    return 0;
}
