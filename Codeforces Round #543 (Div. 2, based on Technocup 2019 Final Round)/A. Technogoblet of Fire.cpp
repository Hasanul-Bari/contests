#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;

    int p[n+1],s[n+1];

    for(int i=1; i<=n; i++)
    {
        cin>>p[i];
    }
    map<int,int> mm, hh;
   // map<int,int> :: iterator it;


    for(int i=1; i<=n; i++)
    {
        cin>>s[i];
        if(mm[s[i]]<p[i])
            mm[s[i]]=p[i];
    }

   /* for(it=mm.begin(); it!=mm.end(); it++)
        cout<<it->first<<" "<<it->second<<endl;*/



    int x,c=0;
    for(int i=1; i<=k; i++)
    {
        cin>>x;
        //cout<<p[x]<<" "<<mm[x]<<endl;
        if(p[x]<mm[s[x]])
        {
            //cout<<p[x]<<" "<<mm[x]<<endl;
            c++;
        }



    }

    cout<<c<<endl;
    return 0;




}
