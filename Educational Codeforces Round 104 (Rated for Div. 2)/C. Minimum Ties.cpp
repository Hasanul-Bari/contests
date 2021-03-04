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

    int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;

        int w[n+1];
        int l[n+1];

        for(int i=0; i<=n; i++)
        {
            w[i]=0;
            l[i]=0;
        }

        if(n==2)
        {
            cout<<0<<endl;
        }
        else if(n%2!=0)
        {


            int d=(n-1)/2;

            //cout<<"d "<<d<<endl;



            for(int i=1; i<=n-1; i++)
            {
                for(int j=i+1; j<=n; j++)
                {
                    //cout<<i<<" ** "<<j<<endl;
                    //cout<<w[i]<<" "<<l[i]<<endl;
                    //cout<<w[j]<<" "<<l[j]<<endl;



                    if(w[i]<d && l[j]<d)
                    {
                        w[i]++;
                        l[j]++;

                        cout<<1<<" ";
                    }
                    else if(l[i]<d && w[j]<d)
                    {
                        l[i]++;
                        w[j]++;

                        cout<<-1<<" ";
                    }
                    else
                        cout<<0<<" ";

                    //cout<<endl;

                    //cout<<w[i]<<" "<<l[i]<<endl;
                    //cout<<w[j]<<" "<<l[j]<<endl;


                    //cout<<endl<<endl;

                }
            }
            cout<<endl;

        }
        else
        {

            int d=(n-1)/2;

            //cout<<"d "<<d<<endl;

            int p=1,q=2;

            for(int i=1; i<=n-1; i++)
            {
                for(int j=i+1; j<=n; j++)
                {
                    //cout<<i<<" ** "<<j<<endl;
                    //cout<<w[i]<<" "<<l[i]<<endl;
                    //cout<<w[j]<<" "<<l[j]<<endl;

                    if(i==p && j==q)
                    {
                        cout<<0<<" ";
                        p=p+2;
                        q=q+2;
                    }
                    else if(w[i]<d && l[j]<d)
                    {
                        w[i]++;
                        l[j]++;

                        cout<<1<<" ";
                    }
                    else if(l[i]<d && w[j]<d)
                    {
                        l[i]++;
                        w[j]++;

                        cout<<-1<<" ";
                    }
                    else
                        cout<<0<<" ";

                    //cout<<endl;

                    //cout<<w[i]<<" "<<l[i]<<endl;
                    //cout<<w[j]<<" "<<l[j]<<endl;


                    //cout<<endl<<endl;

                }
            }
            cout<<endl;
        }
    }




    return 0;
}
