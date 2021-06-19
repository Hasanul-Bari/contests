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

    int t,n,k,x;
    cin>>t;


    while(t--)
    {
        cin>>n>>k;

        map<int,bool> m;

        int mx;


        for(int i=0; i<n; i++)
        {
            cin>>x;
            m[x]=true;

            if(i==0)
                mx=x;
            else if(x>mx)
                mx=x;
        }

        int mex=0;
        auto it=m.begin();

        while(mex== it->first)
        {
            mex++;
            it++;

            if(it==m.end())
                break;

        }



        //cout<<mex<<"  ** "<<mx<<endl;

        int z=(mex+mx)/2;

        if((mex+mx)%2!=0)
            z++;

        if(m[z]==true)
        {
            cout<<n<<endl;
        }
        else if(z>mx)
        {
            cout<<n+k<<endl;
        }
        else if(m[z]==false)
        {
            cout<<n+min(1,k)<<endl;
        }




    }





    return 0;
}

