#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int n,k;
    cin>>n>>k;


    string const s1("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    //cout<<s1<<" "<<s1.length();

    cin>>s;


    int c=0;
    static int mi=s.length();
    for(int i=0; i<k; i++)
    {
        for(int j=0; j<s.length(); j++)
        {
            if(s1[i]==s[j])
            {
                c++;
            }
        }
       // cout<<c<<endl;
        if(mi>c)
            mi=c;
        c=0;
    }

    //cout<<mi<<endl;


    int c1=0;
    for(int i=0; i<k; i++)
    {
        for(int j=0; j<s.length(); j++)
        {
            if(s1[i]==s[j])
            {
                c1++;

            }
            if(c1>mi)
            {
                //cout<<c1<<" "<<mi<<endl;
                s.erase(s.begin()+j);
            }


        }
        c1=0;
    }

    //cout<<s<<endl;

    if(mi==0)
        cout<<mi<<endl;
    else
        cout<<s.length()<<endl;

    return 0;


}
