#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

bool f;


void check(map<int,int> m,int a[],int x,int tp,int n)
{

    vector<pair<int,int> > ans;

    ans.pb({tp,x});

    int xx=tp+x;

    m[x]--;




    for(int i=(2*n)-2; i>=0; i--)
    {
        //cout<<tp-a[i]<<" -- "<<a[i]<<endl;

        if(m[a[i]]!=0)
        {

            if(tp-a[i]!=a[i])
            {
                if(m[tp-a[i]]>0)
                {
                    m[a[i]]--;
                    m[tp-a[i]]--;

                    //cout<<tp-a[i]<<" ** "<<a[i]<<endl;

                    ans.pb({tp-a[i],a[i]});

                    tp=a[i];
                }
            }
            else if(tp-a[i]==a[i])
            {
                if(m[tp-a[i]]>1)
                {
                    m[a[i]]--;
                    m[tp-a[i]]--;

                    //cout<<tp-a[i]<<" ** "<<a[i]<<endl;

                    ans.pb({tp-a[i],a[i]});

                    tp=a[i];


                }

            }

        }



    }

    if(ans.size()==n)
    {
        f=true;
        cout<<"YES"<<endl;
        cout<<xx<<endl;
        for(auto x : ans)
        {
            cout<<x.first<<" "<<x.second<<endl;
        }
    }

}


int main()
{
    faster

    int t,n;

    cin>>t;

    while(t--)
    {
        cin>>n;

        int a[2*n];

        map<int,int> m;



        for(int i=0; i<2*n; i++)
        {
            cin>>a[i];
            m[a[i]]++;

        }

        sort(a,a+(2*n));

        f=false;

        for(int i=0; i<(2*n)-1; i++)
        {

            check(m,a,a[i],a[2*n-1],n);

            if(f==true)
                break;

        }

        if(f==false)
            cout<<"NO"<<endl;








    }




    return 0;
}

