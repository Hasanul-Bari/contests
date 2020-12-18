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
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        int c=0,c1=0;
        for(int i=0; i<4; i++)
        {
            if(i%2==0)
            {
                if(s[i]=='2')
                    c++;
                else
                    break;
            }
            else
            {
                if(s[i]=='0')
                    c++;
                else
                    break;
            }
        }

        for(int i=n-1,j=0; j<4; j++,i--)
        {
            if(j%2==0)
            {
                if(s[i]=='0')
                    c1++;
                else
                    break;
            }
            else
            {
                if(s[i]=='2')
                    c1++;
                else
                    break;
            }
        }



        if(c==4 || c1==4)
            cout<<"YES"<<endl;
        else if(c1+c>=4)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }




    return 0;
}
