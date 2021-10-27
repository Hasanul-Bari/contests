#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

void solve(int tc)
{
    int n,x,q;
    cin>>n;

    map<int,int> m;

    int rec=0,sqr=0;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        m[x]++;

        if(m[x]==4)
            sqr++,rec--;
        else if(m[x]>0 && m[x]%2==0)
                rec++;

    }


    cin>>q;

    char c;

    while(q--)
    {
        cin>>c>>x;

        if(c=='+')
        {
            m[x]++;

            if(m[x]==4)
                sqr++,rec--;
            else if(m[x]>0 && m[x]%2==0)
                rec++;
        }
        else if(c=='-')
        {
            if(m[x]==4)
                sqr--,rec++;
            else if(m[x]>0 && m[x]%2==0)
                rec--;

            m[x]--;
        }

        //cout<<sqr<<endl;

        int sqr2=sqr,rec2=rec;

        if(sqr2>1)
        {
            sqr2--;
            rec2=rec2+(sqr2*2);
            sqr2=1;
        }


        //cout<<sqr2<<" "<<rec2<<endl;



        if(sqr2>=1 && rec2>=2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

}


int main()
{
    faster

    //int t; cin>>t; for(int tc=1; tc<=t; tc++)solve(tc);

    solve(1);



    return 0;
}

