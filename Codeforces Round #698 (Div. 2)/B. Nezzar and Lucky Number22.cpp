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

    int t,q,d,a;
    cin>>t;

    while(t--)
    {

        cin>>q>>d;

        while(q--)
        {
            cin>>a;

            int tm=a;
            bool hp=false;

            while(tm>0)
            {
                if(tm%10==d)
                    hp=true;
                //cout<<tm%10<<endl;
                tm=tm/10;
            }

            if(hp==true)
                cout<<"YES"<<endl;
            else
            {

                tm=a;
                for(int i=0; i<=9; i++)
                {

                    tm=tm-d;
                    int tmm=tm;

                    if(tmm<0)
                        break;


                    while(tmm>0)
                    {
                        if(tmm%10==d)
                            hp=true;
                        //cout<<tmm%10<<endl;
                        tmm=tmm/10;
                    }

                    //cout<<tm<<" ** "<<endl;

                }

                if(hp==true)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;


            }
        }




    }




    return 0;
}

