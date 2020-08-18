#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string c,a;
    cin>>c>>a;

    int x=0,y=0,w=0,z=0;
    for(int i=0; i<n; i++)
    {
        if(c[i]=='0' && a[i]=='0')
        {
            x++;
        }
        else if(c[i]=='0' && a[i]=='1')
        {
            y++;
        }
        else if(c[i]=='1' && a[i]=='0')
        {
            w++;
        }
        else if(c[i]=='1' && a[i]=='1')
        {
            z++;
        }

        //cout<<x<<" "<<y<<" "<<w<<" "<<z<<endl;
    }
    cout<<x<<" "<<y<<" "<<w<<" "<<z<<endl;
    int hp=n/2;
    cout<<hp<<endl;

    int fi=0,sec=0;
    if(y>w)
    {
        w=w+(y/2);
        y=y-(y/2);
    }
    else if(y<w)
    {
        w=w-(w/2);
        y=y+(w/2);
    }

    cout<<x<<" "<<y<<" "<<w<<" "<<z<<endl;




    return 0;
}


