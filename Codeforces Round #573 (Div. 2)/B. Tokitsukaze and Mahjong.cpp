#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    string s1,s2,s3;
    cin>>s1>>s2>>s3;

    int a1,a2;

    if(s1==s2 && s2==s3)
    {
        a1=0;
    }
    else if(s1==s2 || s1==s3 || s2==s3)
    {
        a1=1;
    }
    else
    {
        a1=2;
    }

    int a[3];

    if(s1[1]==s2[1] && s2[1]==s3[1])
    {
        a[0]=s1[0]-48;
        a[1]=s2[0]-48;
        a[2]=s3[0]-48;

        sort(a,a+3);
        /*for(int i=0; i<3; i++)
            cout<<a[i]<<" ";
        cout<<endl;*/

        if(a[1]==a[0]+1   && a[2]==a[1]+1)
            a2=0;

        else if(a[1]==a[0]+1   || a[1]==a[0]+2)
            a2=1;
        else if(a[2]==a[1]+1   || a[2]==a[1]+2)
            a2=1;
        else
            a2=2;


    }
    else if(s1[1]==s2[1])
    {
        a[0]=s1[0]-48;
        a[1]=s2[0]-48;

        int z=abs(a[0]-a[1]);

        //cout<<z<<endl;

        if(z==2 || z==1)
            a2=1;
        else
            a2=2;
    }
    else if(s1[1]==s3[1])
    {
        a[0]=s1[0]-48;
        a[1]=s3[0]-48;

        int z=abs(a[0]-a[1]);
        //cout<<z<<endl;

        if(z==2 || z==1)
            a2=1;
        else
            a2=2;
    }
    else if(s2[1]==s3[1])
    {
        a[0]=s2[0]-48;
        a[1]=s3[0]-48;

        int z=abs(a[0]-a[1]);

        if(z==2 || z==1)
            a2=1;
        else
            a2=2;
    }
    else
        a2=2;

    //cout<<a1<<" "<<a2<<endl;


    cout<<min(a1,a2)<<endl;




    return 0;
}
