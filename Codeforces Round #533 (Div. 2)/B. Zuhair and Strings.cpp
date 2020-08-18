#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    int c=0,i,j;
    for(i=0; i<s.length()-k; i++)
    {
        for(j=i; j<i+k; j++)
        {
            if(s[j]==s[i])
            {
                c++;
            }
        }
        if(c==k)
        {
            i=j-1;
        }
        cout<<c<<endl;
        c=0;
    }
}
