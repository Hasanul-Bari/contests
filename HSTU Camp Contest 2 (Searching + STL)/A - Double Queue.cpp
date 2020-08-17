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

    int n,k,p;


    set<pair<int,int> > s;
    set<pair<int,int> > :: iterator it;

    while(cin>>n)
    {
        if(n==0)
            break;
        else if(n==1)
        {
            cin>>k>>p;
            s.insert(make_pair(p,k));
        }
        else if(n==2)
        {
            if(s.size()==0)
                cout<<0<<endl;
            else
            {
                cout<<(s.rbegin()->second)<<endl;
                s.erase(--s.end());
            }
        }
        else if(n==3)
        {
            if(s.size()==0)
                cout<<0<<endl;
            else
            {
                cout<<(s.begin()->second)<<endl;
                s.erase(s.begin());
            }
        }
    }


    return 0;
}
