#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

class activity
{
public:
    int start,finish,sl_no;
    char cc;
};

bool comparator(activity a1,activity a2)
{
    return a1.finish<a2.finish;
}

bool comparator2(activity a1,activity a2)
{
    return a1.sl_no<a2.sl_no;
}

int main()
{
    faster

    ll t, n,kk=1;
    cin>>t;

    while(t--)
    {


        cin>>n;

        activity a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i].start>>a[i].finish;
            a[i].sl_no=i+1;
        }

        sort(a,a+n,comparator);

        vector<int> v1,v2;
        //cout<<"Selected activities are "<<endl;
        //cout<<a[0].sl_no<<" ("<<a[0].start<<" "<<a[0].finish<<")"<<endl;
        a[0].cc='J';
        v1.pb(a[0].start);
        v2.pb(a[0].finish);

        int k=0,c=1;

        for(int i=1; i<n; i++)
        {
            if(a[i].start>=a[k].finish)
            {
                //cout<<a[i].sl_no<<" ("<<a[i].start<<" "<<a[i].finish<<")"<<endl;

                v1.pb(a[i].start);
                v2.pb(a[i].finish);
                c++;
                k=i;

                a[i].cc='J';
            }
        }

        //cout<<c<<endl;



        /*for(int i=0; i<v1.size(); i++)
            cout<<v1[i]<<" "<<v2[i]<<endl;*/



        ll z=n-c;
        if(z>0)
        {

            activity b[z];

            for(int i=0,j=0,l=0; i<n; i++)
            {
                if(v1[j]==a[i].start && v2[j]==a[i].finish)
                {
                    j++;
                }
                else
                {
                    //cout<<a[i].sl_no<<" ** "<<i<<" not select ("<<a[i].start<<" "<<a[i].finish<<")"<<endl;
                    b[l].start=a[i].start;
                    b[l].finish=a[i].finish;
                    b[l].sl_no=i;
                    l++;
                }
            }


            //cout<<b[0].sl_no<<" bb ("<<b[0].start<<" "<<b[0].finish<<")"<<endl;
            c++;
            a[b[0].sl_no].cc='C';


            k=0;

            for(int i=1; i<z; i++)
            {
                if(b[i].start>=b[k].finish)
                {
                    //cout<<b[i].sl_no<<" bb ("<<b[i].start<<" "<<b[i].finish<<")"<<endl;
                    c++;
                    k=i;

                    a[b[i].sl_no].cc='C';
                }
            }

        }

        //cout<<c<<endl;


        cout<<"Case #"<<kk<<": ";
        kk++;
        if(c==n)
        {
            sort(a,a+n,comparator2);

            for(int i=0; i<n; i++)
            {
                cout<<a[i].cc;
            }
            cout<<endl;

        }
        else
            cout<<"IMPOSSIBLE"<<endl;


    }

    return 0;
}



