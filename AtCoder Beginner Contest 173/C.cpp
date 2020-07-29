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

    int h,w,k;

    cin>>h>>w>>k;

    char a[h][k];

    int b=0;
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<w; j++)
        {
            cin>>a[i][j];

            if(a[i][j]=='#')
                b++;
        }
    }

    int row[h];

    for(int i=0; i<h; i++)
    {
        row[i]=0;
        for(int j=0; j<w; j++)
        {
            if(a[i][j]=='#')
                row[i]++;
        }
    }

    int col[w];

    for(int i=0; i<w; i++)
    {
        col[i]=0;
        for(int j=0; j<h; j++)
        {
            if(a[j][i]=='#')
                col[i]++;
        }
    }

    int ans=0,c=0;

    for(int i=0; i<h; i++)
    {
        if(b-row[i]==k)
            ans++;


        for(int j=0; j<h; j++)
        {
            if(i!=j && (b-(row[i]+row[j])) ==k)
                c++;
        }
    }
    ans=ans+(c/2);
    c=0;

    for(int i=0; i<w; i++)
    {
        //cout<<b-col[i]<<endl;
        if(b-col[i]==k)
            ans++;


        for(int j=0; j<w; j++)
        {
            //cout<<(b-(col[i]+col[j]))<<" ***2 "<<endl;
            if(i!=j && (b-(col[i]+col[j])) ==k)
                c++;
        }
    }

    ans=ans+(c/2);
    c=0;


    for(int i=0; i<h; i++)
    {

        for(int j=0; j<w; j++)
        {
            if(i!=j && (b-(row[i]+row[j])) ==k)
                c++;
        }
    }










    cout<<ans<<endl;


    for(int i=0; i<h; i++)
    {
        for(int j=0; j<w; j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }






    return 0;
}
