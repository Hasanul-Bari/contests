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

    int t;
    cin>>t;
    char a[12][12];

    while(t--)
    {
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                cin>>a[i][j];
            }
        }

        //cout<<endl;

        a[1][1]=a[1][0];
        a[0][6]=a[0][7];
        a[2][5]=a[2][4];
        a[3][8]=a[3][7];
        a[4][2]=a[4][1];
        a[5][4]=a[5][5];

        a[6][7]=a[6][8];
        a[7][0]=a[7][1];
        a[8][3]=a[8][4];

        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {

                cout<<a[i][j];
            }
            cout<<endl;
        }
    }







    return 0;
}
