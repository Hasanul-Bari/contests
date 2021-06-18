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

    ll t,n,m,tc=1;

    cin>>t;

    while(t--)
    {
        cin>>n;

        int a[n][n];

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>a[i][j];
            }
        }

        int cnt[11];
        int ans=0;



        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {

                for(int k=0; k<=10; k++)
                {
                    cnt[k]=0;
                }

                for(int l=i; (l<i+2 && l<n ) ; l++ )
                {
                    for(int r=j; (r<j+5 && r<n ) ; r++ )
                    {
                        cnt[a[l][r]]++;
                    }
                }

                int c=0;
                for(int k=1; k<=10; k++)
                {
                    if(cnt[k]==1)
                        c++;

                    cnt[k]=0;
                }
                if(c==10)
                    ans++;


                for(int l=i; (l<i+5 && l<n ) ; l++ )
                {
                    for(int r=j; (r<j+2 && r<n ) ; r++ )
                    {
                        cnt[a[l][r]]++;
                    }
                }


                c=0;
                for(int k=1; k<=10; k++)
                {
                    if(cnt[k]==1)
                        c++;

                    cnt[k]=0;
                }
                if(c==10)
                    ans++;


                for(int l=i; (l<i+1 && l<n ) ; l++ )
                {
                    for(int r=j; (r<j+10 && r<n ) ; r++ )
                    {
                        cnt[a[l][r]]++;
                    }
                }


                c=0;
                for(int k=1; k<=10; k++)
                {
                    if(cnt[k]==1)
                        c++;

                    cnt[k]=0;
                }
                if(c==10)
                    ans++;


                for(int l=i; (l<i+10 && l<n ) ; l++ )
                {
                    for(int r=j; (r<j+1 && r<n ) ; r++ )
                    {
                        cnt[a[l][r]]++;
                    }
                }


                c=0;
                for(int k=1; k<=10; k++)
                {
                    if(cnt[k]==1)
                        c++;

                    cnt[k]=0;
                }
                if(c==10)
                    ans++;







            }
        }

        cout<<"Case "<<tc<<": "<<ans<<endl;
        tc++;
    }





    return 0;
}

