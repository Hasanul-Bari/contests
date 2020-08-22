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

    int q;
    cin>>q;

    string s;

    map<int,bool> m;

    m[2]=m[6]=m[10]=m[14]=m[18]=m[22]=m[26]=true;

    while(q--)
    {
        cin>>s;

        int a=s[0]-64;
        int b=s[1]-64;
        int c=s[2]-64;

        //cout<<a<<" "<<b<<" "<<c<<endl;

        int cc=0;

        if(m[a]==true)
            cc++;
        if(m[b]==true)
            cc++;
        if(m[c]==true)
            cc++;

        if(cc==3)
        {
            cout<<"Jami"<<endl;
        }
        else if(cc==2)
        {
            cout<<"Jan"<<endl;
        }
        else
        {
            int z=0;

            while(m[a]!=true)
                a++,z++;

            while(m[b]!=true)
                b++,z++;

            while(m[c]!=true)
                c++,z++;

            //cout<<z<<endl;

            if(z%2==0)
                cout<<"Jami"<<endl;
            else
                cout<<"Jan"<<endl;


        }

    }




    return 0;
}
