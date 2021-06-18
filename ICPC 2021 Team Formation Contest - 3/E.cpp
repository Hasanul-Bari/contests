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

    int r,c;

    cin>>r>>c;

    char a[r][c];


    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>a[i][j];
        }
    }

    bool ff=true;

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {

            if(a[i][j]=='P')
            {
                bool f=true;

                if(i+1<r && a[i+1][j]=='W')
                    f=false;

                if(i-1>=0 && a[i-1][j]=='W')
                    f=false;

                if(j+1<c && a[i][j+1]=='W')
                    f=false;

                if(j-1>=0 && a[i][j-1]=='W')
                    f=false;

                if(f==false)
                    ff=false;

            }
        }
    }

    if(ff==true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;




    return 0;
}

