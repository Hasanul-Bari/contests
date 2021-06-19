#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int mirror(int x)
{
    if(x==0 || x==1 || x==8)
        return x;
    else if(x==2)
        return 5;
    else if(x==5)
        return 2;
    else
        return -1;
}

int isvalid(int hh, int mm,int h,int m)
{
    int h1=mirror(mm%10);
    int h2=mirror(mm/10);

    int m1=mirror(hh%10);
    int m2=mirror(hh/10);



    if(h1>=0 && h2>=0 && m1>=0 && m2>=0)
    {
        if(m1*10+m2<m && h1*10+h2<h)
        {
            return h1*1000+h2*100+m1*10+m2;
        }
        else
            return -1;

    }
    else
        return -1;

}

int main()
{
    faster

    int t,h,m;
    cin>>t;

    string s;

    while(t--)
    {
        cin>>h>>m;

        cin>>s;

        int hh=(s[0]-'0')*10+(s[1]-'0');

        int mm=(s[3]-'0')*10+(s[4]-'0');

        //cout<<hh<<" "<<mm<<endl;

        bool f=false;

        while(hh<h)
        {
            int n=isvalid(hh,mm,h,m);

            //cout<<n<<endl;

            if(n>=0)
            {

                //cout<<hh<<" ** "<<mm<<endl;

                if(hh<=9)
                    cout<<0<<hh<<":";
                else
                    cout<<hh<<":";

                 if(mm<=9)
                    cout<<0<<mm<<endl;
                else
                    cout<<mm<<endl;


                f=true;
                break;
            }

            mm++;

            if(mm==m)
            {
                mm=0;
                hh++;
            }

        }

        if(f==false)
        {
            cout<<"00:00"<<endl;
        }




    }





    return 0;
}
