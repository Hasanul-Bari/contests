#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int a[26];


int main()
{
    faster

    int t,n,m;
    string s;

    cin>>t;

    while(t--)
    {
        cin>>n>>m;

        cin>>s;


        int p[m];

        for(int i=0; i<m; i++)
            cin>>p[i];

        sort(p,p+m);

        for(int i=0; i<m; i++)
        {
            if(i!=0)
            {
                int x=p[i-1];

                for(int j=x; j<p[i]; j++)
                {
                    //cout<<s[j]<<" ** ";

                    a[s[j]-'a']=a[s[j]-'a']+((m-i)+1);
                }
                //cout<<endl;
            }
            else
            {
                for(int j=0; j<p[i]; j++)
                {
                    a[s[j]-'a']=a[s[j]-'a']+((m-i)+1);
                }
            }


            /*for(int i=0; i<26; i++)
            {
                cout<<a[i]<<" ";
            }

            cout<<endl;*/
        }



        if(m!=1)
        {
            int x=p[m-1];

            for(int j=x; j<s.length(); j++)
            {
                //cout<<s[j]<<" ** ";

                a[s[j]-'a']=a[s[j]-'a']+1;
            }
            //cout<<endl;
        }




        for(int i=0; i<26; i++)
        {
            cout<<a[i]<<" ";
            a[i]=0;
        }

        cout<<endl;


    }




    return 0;
}
