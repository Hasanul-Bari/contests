#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        string s;
        cin>>s;
        int r;
        cin>>r;
        for(int j=0; j<r; j++)
        {
            char a,b;
            cin>>a>>b;

            //cout<<s.length()<<endl;

            for(int k=0; k<s.length(); k++)
            {
                if(s[k]==b)
                    s[k]=a;
            }
        }
        cout<<s<<endl;
    }

    return 0;
}
