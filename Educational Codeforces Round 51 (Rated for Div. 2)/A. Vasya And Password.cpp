#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        string s;
        cin>>s;

        int u=0,l=0,d=0;

        for(int j=0; j<s.length(); j++)
        {
            if(isdigit(s[i]))
                d++;
            else if(islower(s[i]))
                l++;
            else if(isupper(s[i]))
                u++;



        }

        cout<<l<<" "<<u<<" "<<d;

        if(l!=0 && u!=0  && d!=0)
        {
            cout<<s<<endl;
        }
    }
}
