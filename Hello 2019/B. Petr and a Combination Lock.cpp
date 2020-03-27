#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    int a[n],b[n];
    int s1=0,s2=0,s3=0,s4=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }

    for(int i=1; i<n; i++)
    {
        s1=abs(s1-abs(a[i]-a[i-1]));
        s2=abs(s2-abs(a[i]+a[i-1]));
        s3=abs(s3-abs(a[i]-b[i-1]));
        s4=abs(s4-abs(a[i]+b[i-1]));


        //a[i]=abs(a[i]-a[i-1]);
        b[i]=abs(b[i]+b[i-1]);



    }
    if(s1==0 || s2==0 || s3==0 || s4==0 || s1==360 || s2==360 || s3==360 || s4==360)
    {
            c=1;

    }


    cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<endl;

}


    /*int s1=0,s2=0,c=0,s3=0,s4=0;
    int h1,h2,h3,h4;
    h1=h2=h3=h4=0;

    for(int i=0; i<n; i++)
    {
        s1=a[i];
        s2=-a[i];
        s3=a[i];
        s4=-a[i];
        b[i]=-b[i];
        for(int j=0; j<n; j++)
        {
            if(j!=i)
            {
                s1=s1+a[j];
                s2=s2+a[j];
                s3=s3-a[j];
                s4=s4-a[j];

                h1=h1+b[j];
                h2=h2+b[j];
                h3=h3-b[j];
                h4=h4-b[j];
            }


        }
        cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<endl;
        cout<<h1<<" "<<h2<<" "<<h3<<" "<<h4<<endl;

        if(s1==0 || s2==0 || s3==0 || s4==0 || s1==360 || s2==360 || s3==360 || s4==360)
        {
            c=1;
            break;
        }




    }

    if(c==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;

}*/
