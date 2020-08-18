#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ans=0,c1,c2;
    string s,t;
    cin>>s>>t;
    if(s.length()!=t.length())
        ans=1;

    else
    {

        for(int i=0; i<s.length(); i++)
        {
            c1=0;
            c2=0;
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                c1=1;

            if(t[i]=='a' || t[i]=='e' || t[i]=='i' || t[i]=='o' || t[i]=='u')
                c2=1;

            if((c1==0 && c2==1) || (c1==1 && c2==0) )
            {
                ans=1;
                break;
            }


        }

    }

    if(ans==1)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;

    return 0;
}
