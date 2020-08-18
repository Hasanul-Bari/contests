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
    ll start,finish,sl_no;
    char cc;
};



int len[1450],jj[1450],cc[1450];

int main()
{
    faster

    ll t, n,kk=1;
    cin>>t;

    while(t--)
    {


        for(int i=0; i<1450; i++)
            len[i]=0,jj[i]=0,cc[i]=0;

        cin>>n;

        activity a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i].start>>a[i].finish;

            for(int j=a[i].start; j<a[i].finish; j++)
            {
                len[j]++;
            }

            a[i].sl_no=i+1;
        }

        bool hpp=false;
        for(int i=0; i<n; i++)
        {
            bool hp=false,hpj=false,hpc=false;
            for(int j=a[i].start; j<a[i].finish; j++)
            {
                if(len[j]>2)
                {
                    hp=true;
                    break;
                }
                if(jj[j]>0)
                {
                    hpj=true;
                }
                if(cc[j]>0)
                {
                    hpc=true;
                }
            }
            if(hp==true)
            {
                hpp=true;
                break;
            }
            else if(hpj==true && hpc==true)
            {
                hpp=true;
                break;
            }
            else if(hpj==false)
            {
                for(int j=a[i].start; j<a[i].finish; j++)
                    jj[j]++;

                a[i].cc='J';
            }
            else if(hpc==false)
            {
                for(int j=a[i].start; j<a[i].finish; j++)
                    cc[j]++;

                a[i].cc='C';
            }





        }




        cout<<"Case #"<<kk<<": ";
        kk++;
        if(hpp==true)
        {
            cout<<"IMPOSSIBLE"<<endl;

        }
        else
        {
            for(int i=0; i<n; i++)
            {
                cout<<a[i].cc;
            }
            cout<<endl;
        }






    }

    return 0;
}


