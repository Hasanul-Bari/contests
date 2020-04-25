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

    int t,n,k,kk=1;

    cin>>t;
    while(t--)
    {
        cin>>n>>k;

        cout<<"Case #"<<kk<<": ";
        kk++;

        if(n==2)
        {
            if(k==2)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"1 2"<<endl;
                cout<<"2 1"<<endl;
            }
            else if(k==4)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"2 1"<<endl;
                cout<<"1 2"<<endl;
            }
            else
                cout<<"IMPOSSIBLE"<<endl;
        }
        else if(n==3)
        {
            if(k==3)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"1 3 2"<<endl;
                cout<<"2 1 3"<<endl;
                cout<<"3 2 1"<<endl;

            }
            else if(k==6)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"2 3 1"<<endl;
                cout<<"1 2 3"<<endl;
                cout<<"3 1 2"<<endl;

            }
            else if(k==9)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"3 1 2"<<endl;
                cout<<"2 3 1"<<endl;
                cout<<"1 2 3"<<endl;

            }
            else
                cout<<"IMPOSSIBLE"<<endl;
        }

        else if(n==4)
        {
            if(k==4)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"1 2 4 3"<<endl;
                cout<<"2 1 3 4"<<endl;
                cout<<"4 3 1 2"<<endl;
                cout<<"3 4 2 1"<<endl;

            }
            else if(k==6)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"1 2 4 3"<<endl;
                cout<<"2 1 3 4"<<endl;
                cout<<"4 3 2 1"<<endl;
                cout<<"3 4 1 2"<<endl;

            }
            else if(k==7)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"3 2 4 1"<<endl;
                cout<<"4 1 2 3"<<endl;
                cout<<"2 3 1 4"<<endl;
                cout<<"1 4 3 2"<<endl;

            }
            else if(k==9)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"1 2 4 3"<<endl;
                cout<<"4 3 2 1"<<endl;
                cout<<"2 1 3 4"<<endl;
                cout<<"3 4 1 2"<<endl;

            }

            else if(k==10)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"1 4 3 2"<<endl;
                cout<<"4 1 2 3"<<endl;
                cout<<"3 2 4 1"<<endl;
                cout<<"2 3 1 4"<<endl;

            }
            else if(k==11)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"1 2 3 4"<<endl;
                cout<<"3 4 2 1"<<endl;
                cout<<"2 1 4 3"<<endl;
                cout<<"4 3 1 2"<<endl;

            }
            else if(k==13)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"3 2 1 4"<<endl;
                cout<<"1 4 2 3"<<endl;
                cout<<"2 3 4 1"<<endl;
                cout<<"4 1 3 2"<<endl;

            }


            else if(k==8)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"2 1 4 3"<<endl;
                cout<<"1 2 3 4"<<endl;
                cout<<"4 3 2 1"<<endl;
                cout<<"3 4 1 2"<<endl;

            }
            else if(k==12)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"3 2 4 1"<<endl;
                cout<<"2 3 1 4"<<endl;
                cout<<"4 1 3 2"<<endl;
                cout<<"1 4 2 3"<<endl;

            }
            else if(k==16)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"4 2 1 3"<<endl;
                cout<<"2 4 3 1"<<endl;
                cout<<"1 3 4 2"<<endl;
                cout<<"3 1 2 4"<<endl;

            }
            else if(k==14)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"3 4 1 2"<<endl;
                cout<<"4 3 2 1"<<endl;
                cout<<"1 2 4 3"<<endl;
                cout<<"2 1 3 4"<<endl;

            }
            else
                cout<<"IMPOSSIBLE"<<endl;
        }


        else if(n==5)
        {
            if(k==5)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"1 2 5 3 4"<<endl;
                cout<<"2 1 3 4 5"<<endl;
                cout<<"3 4 1 5 2"<<endl;
                cout<<"4 5 2 1 3"<<endl;
                cout<<"5 3 4 2 1"<<endl;
            }
            else if(k==7)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"2 1 3 4 5"<<endl;
                cout<<"1 2 5 3 4"<<endl;
                cout<<"3 4 1 5 2"<<endl;
                cout<<"4 5 2 1 3"<<endl;
                cout<<"5 3 4 2 1"<<endl;
            }
            else if(k==23)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"4 5 3 2 1"<<endl;
                cout<<"5 4 1 3 2"<<endl;
                cout<<"3 2 5 1 4"<<endl;
                cout<<"2 1 4 5 3"<<endl;
                cout<<"1 3 2 4 5"<<endl;
            }
            else if(k==8)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"2 4 3 1 5"<<endl;
                cout<<"4 1 2 5 3"<<endl;
                cout<<"3 5 1 4 2"<<endl;
                cout<<"1 2 5 3 4"<<endl;
                cout<<"5 3 4 2 1"<<endl;
            }
           else if(k==22)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"4 2 3 5 1"<<endl;
                cout<<"2 5 4 1 3"<<endl;
                cout<<"3 1 5 2 4"<<endl;
                cout<<"5 4 1 3 2"<<endl;
                cout<<"1 3 2 4 5"<<endl;
            }




            else if(k==11)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"2 5 3 4 1"<<endl;
                cout<<"3 2 5 1 4"<<endl;
                cout<<"4 3 1 2 5"<<endl;
                cout<<"5 1 4 3 2"<<endl;
                cout<<"1 4 2 5 3"<<endl;
            }
            else if(k==13)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"2 5 4 3 1"<<endl;
                cout<<"4 2 5 1 3"<<endl;
                cout<<"3 4 1 2 5"<<endl;
                cout<<"5 1 3 4 2"<<endl;
                cout<<"1 3 2 5 4"<<endl;
            }
            else if(k==17)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"3 4 5 2 1"<<endl;
                cout<<"5 3 4 1 2"<<endl;
                cout<<"2 5 1 3 4"<<endl;
                cout<<"4 1 2 5 3"<<endl;
                cout<<"1 2 3 4 5"<<endl;
            }
            else if(k==19)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"4 3 5 2 1"<<endl;
                cout<<"5 4 3 1 2"<<endl;
                cout<<"2 5 1 4 3"<<endl;
                cout<<"3 1 2 5 4"<<endl;
                cout<<"1 2 4 3 5"<<endl;
            }



            else if(k==10)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"2 1 5 3 4"<<endl;
                cout<<"1 2 3 4 5"<<endl;
                cout<<"3 4 2 5 1"<<endl;
                cout<<"4 5 1 2 3"<<endl;
                cout<<"5 3 4 1 2"<<endl;
            }

            else if(k==12)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"1 5 4 3 2"<<endl;
                cout<<"4 1 5 2 3"<<endl;
                cout<<"3 4 2 1 5"<<endl;
                cout<<"5 2 3 4 1"<<endl;
                cout<<"2 3 1 5 4"<<endl;
            }
            else if(k==14)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"1 4 5 3 2"<<endl;
                cout<<"5 1 4 2 3"<<endl;
                cout<<"3 5 2 1 4"<<endl;
                cout<<"4 2 3 5 1"<<endl;
                cout<<"2 3 1 4 5"<<endl;
            }
            else if(k==16)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"3 5 4 1 2"<<endl;
                cout<<"4 3 5 2 1"<<endl;
                cout<<"1 4 2 3 5"<<endl;
                cout<<"5 2 1 4 3"<<endl;
                cout<<"2 1 3 5 4"<<endl;
            }
            else if(k==18)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"3 4 5 1 2"<<endl;
                cout<<"5 3 4 2 1"<<endl;
                cout<<"1 5 2 3 4"<<endl;
                cout<<"4 2 1 5 3"<<endl;
                cout<<"2 1 3 4 5"<<endl;
            }




            else if(k==15)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"3 2 5 1 4"<<endl;
                cout<<"2 3 1 4 5"<<endl;
                cout<<"1 4 3 5 2"<<endl;
                cout<<"4 5 2 3 1"<<endl;
                cout<<"5 1 4 2 3"<<endl;
            }
            else if(k==9)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"2 4 1 5 3"<<endl;
                cout<<"1 2 4 3 5"<<endl;
                cout<<"5 1 3 2 4"<<endl;
                cout<<"4 3 5 1 2"<<endl;
                cout<<"3 5 2 4 1"<<endl;
            }
            else if(k==21)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"4 1 5 2 3"<<endl;
                cout<<"5 4 1 3 2"<<endl;
                cout<<"2 5 3 4 1"<<endl;
                cout<<"1 3 2 5 4"<<endl;
                cout<<"3 2 4 1 5"<<endl;
            }




            else if(k==20)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"4 2 5 3 1"<<endl;
                cout<<"2 4 3 1 5"<<endl;
                cout<<"3 1 4 5 2"<<endl;
                cout<<"1 5 2 4 3"<<endl;
                cout<<"5 3 1 2 4"<<endl;
            }
            else if(k==25)
            {
                cout<<"POSSIBLE"<<endl;
                cout<<"5 2 1 3 4"<<endl;
                cout<<"2 5 3 4 1"<<endl;
                cout<<"3 4 5 1 2"<<endl;
                cout<<"4 1 2 5 3"<<endl;
                cout<<"1 3 4 2 5"<<endl;
            }
            else
                cout<<"IMPOSSIBLE"<<endl;
        }

    }




    return 0;
}
