#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int c[26],nxt[26][26],nxt3[26][26][26];


void solve(int tc)
{
    int n;
    string s;

    cin>>n>>s;

    for(int i=0; i<26; i++)
    {
        c[i]=0;
        for(int j=0; j<26; j++)
        {
            nxt[i][j]=0;
            for(int k=0; k<26; k++)
            {
                nxt3[i][j][k]=0;
            }
        }
    }


    for(int i=0; i<n; i++)
    {
        c[s[i]-97]++;

        if(i-1>=0)
        {
            nxt[s[i-1]-97][s[i]-97]++;
        }
        if(i-2>=0)
        {
            nxt3[s[i-2]-97][s[i-1]-97][s[i]-97]++;
        }
    }


    for(int i=0; i<26; i++)
    {
        if(c[i]==0)
        {
            cout<<char(i+97)<<endl;
            return;
        }
    }

    for(int i=0; i<26; i++)
    {
        for(int j=0; j<26; j++)
        {
            if(nxt[i][j]==0)
            {
                cout<<char(i+97)<<char(j+97)<<endl;
                return;
            }
        }
    }

    for(int i=0; i<26; i++)
    {
        for(int j=0; j<26; j++)
        {
            if(nxt[i][j]==0)
            {
                cout<<char(i+97)<<char(j+97)<<endl;
                return;
            }
        }
    }

    for(int i=0; i<26; i++)
    {
        for(int j=0; j<26; j++)
        {
            for(int k=0; k<26; k++)
            {
                if(nxt3[i][j][k]==0)
                {
                    cout<<char(i+97)<<char(j+97)<<char(k+97)<<endl;
                    return;
                }
            }

        }
    }
}


int main()
{
    faster

    int t;
    cin>>t;

    //solve(1);
    for(int tc=1; tc<=t; tc++)solve(tc);


    return 0;
}

