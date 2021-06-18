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


    char a[3][10];

    int x,y;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<10; j++)
        {
            cin>>a[i][j];

            if(a[i][j]=='=')
            {
                x=i;
                y=j;
            }

        }
    }


    for(int j=y+1; j<10; j++)
    {

        if(a[x][j]!='.')
        {
            cout<<a[x][j]<<endl;
            return 0;
        }

    }

    cout<<"You shall pass!!!"<<endl;





    return 0;
}


