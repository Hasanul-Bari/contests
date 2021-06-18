#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    int n;
    cin>>n;

    string s[n];

    for(int i=0; i<n; i++)
        cin>>s[i];


    int m;
    cin>>m;

    string x,a;

    int t=0;

    while(m--)
    {
        cin>>x;

        if(x=="CapsLock")
        {
            if(t==0)
                t=1;
            else
                t=0;
        }
        else if(x=="Space")
        {
            a.pb(' ');
        }
        else if(x=="Backspace")
        {
            if(a.size()>0)
            {
                a.pop_back();
            }
        }
        else
        {
            char c;

            if(t==0)
                c=tolower(x[0]);
            else
                c=toupper(x[0]);


            a.pb(c);

        }


    }

    //cout<<a<<endl;
    bool f=false;

    for(int i=1; i<a.length(); i++)
    {
        if(a[i]==' ' && a[i-1]==' ')
            f=true;
    }


    if(f==true)
    {
        cout<<"Incorrect"<<endl;
        return 0;
    }


    istringstream ss(a);

    string w;

    int i=0;

    while(ss>>w)
    {
        //cout<<w<<endl;
        if(i==n)
        {
            cout<<"Incorrect"<<endl;
            return 0;
        }

        if(w==s[i])
            i++;
        else
        {
            cout<<"Incorrect"<<endl;
            return 0;
        }
    }

    cout<<"Correct"<<endl;







    return 0;
}
