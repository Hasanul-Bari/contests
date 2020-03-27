#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster
    int n,x;
    cin>>n;
    int p,q,r;


    set <int> s;
    set <int> :: iterator it;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        s.insert(x);
    }

    //cout<<s.size()<<endl;

    if(s.size()==1)
    {
        cout<<0<<endl;
    }

    else if(s.size()==2)
    {
        it=s.begin();
        p=*it;
        it++;
        q=*it;

        if((abs(p-q))%2==0)
            cout<<abs(p-q)/2<<endl;
        else
            cout<<abs(p-q)<<endl;


    }

    else if(s.size()==3)
    {
        it=s.begin();
        p=*it;
        it++;
        q=*it;
        it++;
        r=*it;
        if(abs(p-q)==abs(q-r))
        {
            cout<<abs(p-q)<<endl;
        }
        else
            cout<<-1<<endl;
    }
    else
        cout<<-1<<endl;






    return 0;
}
