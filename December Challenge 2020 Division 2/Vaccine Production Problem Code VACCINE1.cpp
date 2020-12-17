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

    int d1,d2,v1,v2,p;

    cin>>d1>>v1>>d2>>v2>>p;

    int ex=abs(d1-d2);

    int v,c=0;

    if(d1<=d2)
        v=v1;
    else
        v=v2;

    while(ex!=0 && p-v>=0)
    {
        p=p-v;
        ex--;
        c++;
    }



    int rm=p/(v1+v2);

    if(p%(v1+v2)!=0)
        rm++;

    //cout<<rm<<endl;

    cout<<c+rm+(min(d1,d2))-1<<endl;




    return 0;
}
