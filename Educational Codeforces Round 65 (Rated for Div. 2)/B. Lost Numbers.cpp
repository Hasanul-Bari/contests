#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    int a,b,c,d;
    printf("%c %d %d\n",'?',1,2);
    fflush(stdout);
    scanf("%d",&a);

    printf("%c %d %d\n",'?',2,3);
    fflush(stdout);
    scanf("%d",&b);

    printf("%c %d %d\n",'?',3,4);
    fflush(stdout);
    scanf("%d",&c);

    printf("%c %d %d\n",'?',4,5);
    fflush(stdout);
    scanf("%d",&d);

    int aa[6],h[6];
    int x[6]={4,8,15,16,23,42};

    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            if(x[i]*x[j]==c)
            {
                aa[0]=x[i];
                aa[1]=x[j];
                //cout<<x[i]<<" "<<x[j]<<" "<<i<<" "<<j<<endl;

            }
        }
    }
    hh[0]=aa[0];
    hh[1]=aa[1];


    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            if(x[i]*x[j]==c)
            {
                aa[1]=x[i];
                aa[2]=x[j];
                //cout<<x[i]<<" "<<x[j]<<" "<<i<<" "<<j<<endl;

            }
        }
    }

    if(hh[0]!=aa[1] && hh[0]!=aa[2])
    {

    }

    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            if(x[i]*x[j]==c)
            {
                aa[2]=x[i];
                aa[3]=x[j];
                //cout<<x[i]<<" "<<x[j]<<" "<<i<<" "<<j<<endl;

            }
        }
    }

    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            if(x[i]*x[j]==d)
            {
                aa[3]=x[i];
                aa[4]=x[j];

            }
        }
    }


    printf("! ");
    for(int i=0; i<6; i++)
    {
        printf("%d ",aa[i]);
    }
    printf("\n");








    return 0;
}
