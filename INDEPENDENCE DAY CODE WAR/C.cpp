#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;




int main()
{
    string s;
    cin>>s;

    int x=s.length();

    map<string,bool> m;

    faster
    vector<bool> prime(10000000,true);

    for(long long i=2; i*i<=10000000; i++)
    {
        if(prime[i]==true)
        {
            for(long long j=i*i; j<=10000000; j=j+i)
                prime[j]=false;
        }
    }

    for(long long i=2; i<=10000000; i++)
    {
        if(prime[i]==true)
        {
            //cout<<i*i<<endl;
            ll z=i*i;
            ostringstream ss;
            ss<<z;

            string s=ss.str();

            //cout<<s<<endl;

            m[s]=true;
        }

    }

    //cout<<m.size()<<endl;


    string mx="0";

    int n = s.size();
    int num = 1<<n;
    for(int i =1; i< num ; i++)
    {
        int value = i;
        int j, pos;
        string hp="";
        for (j=1, pos=1; j < num; j<<=1, pos++)
        {
            if (i & j)
            {
                //cout<<s[pos-1];
                hp=hp+s[pos-1];
            }

        }
        //cout<<endl;

        //cout<<"hp = "<<hp<<endl;


        if(mx<hp || mx.length()<hp.length())
        {
            if(m[hp]==true)
                mx=hp;
            //cout<<"mx = "<<mx<<endl;
        }

    }

    cout<<mx<<endl;







    return 0;
}

