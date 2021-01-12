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

    int t,n;

    cin>>t;


    while(t--)
    {
        cin>>n;

        int a[n];

        vector<int> v;
        ll c=0;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];



        }


        //cout<<"c= "<<c<<endl;

        int rm=0;


        for(int i=0; i<n; i++)
        {

            if(i>0 && i<n-1)
            {
                if(a[i-1]<a[i] && a[i+1]<a[i])
                {
                    c++;
                    rm=max(rm,1);

                }

                else if(a[i-1]>a[i] && a[i+1]>a[i])
                {
                    c++;
                    rm=max(rm,1);
                }
            }



            if(i>=2 && i<n-2)
            {
                int cc=0,c1=0,c2=0;

                //initial

                if(a[i-2]<a[i-1] && a[i]<a[i-1])
                    cc++;
                else if(a[i-2]>a[i-1] && a[i]>a[i-1])
                    cc++;

                if(a[i-1]<a[i] && a[i+1]<a[i])
                    cc++;
                else if(a[i-1]>a[i] && a[i+1]>a[i])
                    cc++;

                if(a[i]<a[i+1] && a[i+2]<a[i+1])
                    cc++;
                else if(a[i]>a[i+1] && a[i+2]>a[i+1])
                    cc++;


                //taking left


                if(a[i-2]<a[i-1] && a[i-1]<a[i-1])
                    c1++;
                else if(a[i-2]>a[i-1] && a[i-1]>a[i-1])
                    c1++;

                if(a[i-1]<a[i-1] && a[i+1]<a[i-1])
                    c1++;
                else if(a[i-1]>a[i-1] && a[i+1]>a[i-1])
                    c1++;

                if(a[i-1]<a[i+1] && a[i+2]<a[i+1])
                    c1++;
                else if(a[i]>a[i+1] && a[i+2]>a[i+1])
                    c1++;



                //taking right

                if(a[i-2]<a[i-1] && a[i+1]<a[i-1])
                    c2++;
                else if(a[i-2]>a[i-1] && a[i+1]>a[i-1])
                    c2++;

                if(a[i-1]<a[i+1] && a[i+1]<a[i+1])
                    c2++;
                else if(a[i-1]>a[i+1] && a[i+1]>a[i+1])
                    c2++;

                if(a[i+1]<a[i+1] && a[i+2]<a[i+1])
                    c2++;
                else if(a[i+1]>a[i+1] && a[i+2]>a[i+1])
                    c2++;



                int mn=min(c1,c2);


                if(mn<=cc)
                    rm=max(rm,cc-mn);




            }

            // 4
            int c4=0;
            if(i>0 && i<n-2)
            {


                if(a[i-1]<a[i] && a[i+1]<a[i])
                    c4++;
                else if(a[i-1]>a[i] && a[i+1]>a[i])
                    c4++;

                if(a[i]<a[i+1] && a[i+2]<a[i+1])
                    c4++;
                else if(a[i]>a[i+1] && a[i+2]>a[i+1])
                    c4++;


                if(c4==2)
                {
                    bool f1=false, f2=false;


                    if(i-2>=0)
                    {

                        if(a[i-2]<a[i-1] && a[i+1]<a[i-1])
                            f1=true;
                        else if(a[i-2]>a[i-1] && a[i+1]>a[i-1])
                            f1=true;

                    }


                    if(i+3<n)
                    {
                        if(a[i]<a[i+2] && a[i+3]<a[i+2])
                            f2=true;
                        else if(a[i]>a[i+2] && a[i+3]>a[i+2])
                            f2=true;
                    }

                    //cout<<f1<<" ** "<<f2<<endl;

                    if(f1==true && f2==true)
                        c4--;

                    rm=max(rm,c4);
                }




            }
        }





        //cout<<c<<" ** "<<rm<<endl;



        c=c-rm;


        cout<<c<<endl;




    }




    return 0;
}
