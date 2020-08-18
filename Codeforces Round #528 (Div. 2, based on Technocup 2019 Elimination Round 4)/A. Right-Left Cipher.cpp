#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,a;
    cin>>s;

    int x=s.length();
    if(x%2==0)
    {
        int m=(x/2)-1,c=1;
        a=a+s[m];
        for(int i=m-1; i>=0; i--)
        {
            a=a+s[m+c];
            a=a+s[m-c];
            c++;
        }
        a=a+s[x-1];
        cout<<a<<endl;
    }


    else
    {
        int m=x/2, c=1;
        a=a+s[m];
        for(int i=m-1; i>=0; i--)
        {
            a=a+s[m+c];
            a=a+s[m-c];
            c++;
        }
        cout<<a<<endl;
    }
    return 0;



}
