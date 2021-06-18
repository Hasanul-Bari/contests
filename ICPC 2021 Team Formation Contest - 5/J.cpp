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



    string a[2];

    cin>>a[0]>>a[1];

    int n=a[0].length();


    int t1=0,t2=0,t3=0,t4=0;

    for(int j=0; j<n; j++)
    {
        if(a[0][j]=='#' && a[1][j]=='#')
            t3++;
        else if(a[0][j]=='#')
            t1++;
        else if(a[1][j]=='#')
            t2++;
        else
            t4++;

    }


    if(t1>0 && t2>0 && t3==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;

        for(int j=0; j<n; j++)
        {
            if(t1>0)
            {
                a[0][j]='#';
                a[1][j]='.';
                t1--;
            }
            else if(t3>0)
            {
                a[0][j]='#';
                a[1][j]='#';
                t3--;
            }
            else if(t2>0)
            {
                a[0][j]='.';
                a[1][j]='#';
                t2--;
            }
            else
            {
                a[0][j]='.';
                a[1][j]='.';

            }



        }

        for(int i=0; i<2; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }








    return 0;
}


