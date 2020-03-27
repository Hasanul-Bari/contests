#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n,k;
    cin>>n>>k;

    int m=0,x;

    list<int> l;
    list<int> :: iterator it;
    map<int,int> mm;


    for(int i=0; i<n; i++)
    {
        cin>>x;
        m++;

        if(m<=k)
        {
            if(mm[x]==0)
            {
                l.push_front(x);

                mm[x]=1;
            }
            else
                m--;

        }
        else
        {

            if(mm[x]==0)
            {
                m--;
                int y=l.back();
                mm[y]=0;

                l.pop_back();



                l.push_front(x);
                mm[x]=1;
                m++;
            }
            else
                m--;

        }

        /*for(it=l.begin();  it!=l.end(); it++ )
            cout<<*it<<" ";

        cout<<endl<<" ** "<<endl;*/


    }
    cout<<l.size()<<endl;
    for(it=l.begin();  it!=l.end(); it++ )
        cout<<*it<<" ";
    cout<<endl;




    return 0;
}
