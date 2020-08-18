#include<bits/stdc++.h>
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);



    int n;
    cin>>n;
    int x,start=0,s1=0,hp=0,end=0;

    int c=0,max=0;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x==0)
            hp=1;
        if(hp==0 && x==1)
        {
            start++;
        }


        if(x==1)
            c++;
        else
        {
            if(max<c)
                max=c;

            c=0;
        }


    }
    if(max<c)
        max=c;

    if(x==1)
        end=c;

    if(start+end>max)
        max=start+end;


    cout<<max<<endl;






    return 0;
}
