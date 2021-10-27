#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int n;
    string s1,s2;
    cin>>n>>s1>>s2;

    int p=-1,s=0;

    for(int i=0; i<n; i++)
    {
        if( (s1[i]=='0' && s2[i]=='1') || (s1[i]=='1' && s2[i]=='0') )
        {
            p=-1;
            s=s+2;
        }

        else if(s1[i]=='0' && s2[i]=='0')
        {
            if(p==1)
            {
                s=s+2;
                p=-1;
            }
            else
            {
                s=s+1;
                p=0;
            }

        }
        else if(s1[i]=='1' && s2[i]=='1')
        {
            if(p==0)
            {
                s=s+1;
                p=-1;
            }
            else
            {
                p=1;
            }
        }

    }


    cout<<s<<endl;


}


int main()
{
    faster

    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++)solve(tc);

    //solve(1);



    return 0;
}




