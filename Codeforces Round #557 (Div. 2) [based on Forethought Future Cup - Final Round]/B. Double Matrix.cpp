#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n,m;
    cin>>n>>m;

    int a[n][m];
    int b[n][m];

    for(int i=0; i<n; i++)
        for(int j=0;  j<m; j++)
            cin>>a[i][j];

    for(int i=0; i<n; i++)
        for(int j=0;  j<m; j++)
            cin>>b[i][j];


    int x,y;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            x=a[i][j];
            y=b[i][j];
            a[i][j]=min(x,y);
            b[i][j]=max(x,y);
        }
    }


    int c1,c2,ans=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            c1=0,c2=0;
            if(j+1<m)
            {
                if(a[i][j]<a[i][j+1])
                    c1++;

                if(b[i][j]<b[i][j+1])
                    c2++;

            }
            else
            {
                c1++;
                c2++;
            }

            if(j-1>=0)
            {
                if(a[i][j]>a[i][j-1])
                    c1++;

                if(b[i][j]>b[i][j-1])
                    c2++;

            }
            else
            {
                c1++;
                c2++;
            }

            if(i+1<n)
            {
                if(a[i][j]<a[i+1][j])
                    c1++;

                if(b[i][j]<b[i+1][j])
                    c2++;
            }
            else
            {
                c1++;
                c2++;
            }

            if(i-1>=0)
            {
                if(a[i][j]>a[i-1][j])
                    c1++;

                if(b[i][j]>b[i-1][j])
                    c2++;

            }
            else
            {
                c1++;
                c2++;
            }


            //cout<<c1<<" "<<c2<<endl;
            if(c1==4 && c2==4)
                continue;
            else
            {
                ans=1;
                break;
            }

        }
        if(ans==1)
            break;
    }



    if(ans==1)
        cout<<"Impossible"<<endl;
    else
        cout<<"Possible"<<endl;




    return 0;
}
