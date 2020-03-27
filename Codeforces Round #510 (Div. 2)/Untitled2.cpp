#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,m,hp;
    cin>>n>>m;
    int *a=new int [n];

    hp=m;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int c=a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]>=c)
            c=a[i];
    }

    int k2=m+c;


    sort(a,a+n);

    int i=1;
    while(m!=0)
    {

        if(a[i-1]<=a[i])
        {
            a[i-1]=a[i-1]+1;
            m--;
            if(m==0)
                break;
        }
        else{
        i++;
        if(i==n)
            i=1;}


    }

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<endl;

    int ma=a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]>=ma)
            ma=a[i];
    }



    if(n==1)
        cout<<hp+a[0]<<" "<<hp+a[0]<<endl;
    else
        cout<<ma<<" "<<k2<<endl;

    return 0;

}
