#include<iostream>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int *x=new int [n];

    for(int i=0; i<n; i++)
    {
        cin>>x[i];
    }

    if(n%2==0)
    {
        int c=0,hp=0,sum=0;;
        for(int i=0,j=n-1; i<n/2; i++,j--)
        {
            //cout<<x[i]<<" "<<x[j]<<endl;
            if(x[i]!=x[j])
            {

                if(x[i]==0 &&  x[j]==1)
                {
                    hp=1;
                }
                else if(x[i]==1 &&  x[j]==0)
                {
                    hp=1;
                }

                else if( (x[i]==2 && x[j]==0) )
                    sum=sum+a;

                else if( (x[i]==0 && x[j]==2) )
                    sum=sum+a;


                else if( (x[i]==2 && x[j]==1) )
                    sum=sum+b;
                else if( (x[i]==1 && x[j]==2) )
                    sum=sum+b;

            }
            if(x[i]==2 && x[j]==2)
            {
                //cout<<x[i]<<" 22 "<<x[j]<<endl;
                if(a>b)
                    sum=sum+(2*b);
                else
                    sum=sum+(2*a);
            }


        }
        if(hp==1)
        cout<<-1<<endl;

        else
            cout<<sum<<endl;


    }



   else
   {
        int c=0,hp=0,sum=0;;
        for(int i=0,j=n-1; i<=n/2; i++,j--)
        {
            //cout<<x[i]<<" "<<x[j]<<endl;
            if(x[i]!=x[j])
            {

                if(x[i]==0 &&  x[j]==1)
                {
                    hp=1;
                }
                else if(x[i]==1 &&  x[j]==0)
                {
                    hp=1;
                }

                else if( (x[i]==2 && x[j]==0) )
                    sum=sum+a;

                else if( (x[i]==0 && x[j]==2) )
                    sum=sum+a;



                else if( (x[i]==2 && x[j]==1) )
                    sum=sum+b;
                else if( (x[i]==1 && x[j]==2) )
                    sum=sum+b;

            }
            if(x[i]==2 && x[j]==2 &&  i!=n/2)
            {
                //cout<<x[i]<<" 22 "<<x[j]<<endl;
                if(a>b)
                    sum=sum+(2*b);
                else
                    sum=sum+(2*a);
            }
            else if(x[i]==2 && x[j]==2 &&  i==n/2)
            {
                //cout<<x[i]<<" 222 "<<x[j]<<endl;
                if(a>b)
                    sum=sum+(b);
                else
                    sum=sum+(a);
            }


        }
        if(hp==1)
        cout<<-1<<endl;

        else
            cout<<sum<<endl;
   }

    return 0;


}
