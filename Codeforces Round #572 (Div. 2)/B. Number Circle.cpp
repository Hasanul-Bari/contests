#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);

    list<int> l;
    list<int> :: iterator it;

    int c=0;

    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            l.push_back(a[i]);
        }

        else
        {
            l.push_front(a[i]);
        }


        if(i>=2)
        {
            if(i+2<n)
            {
                if(a[i]>=a[i-2]+a[i+2])
                {
                    c=1;
                    break;
                }
            }
            else if(i+1<n)
            {
                if(a[i]>=a[i-2]+a[i+1])
                {
                    c=1;
                    break;
                }
            }
            else
            {
                if(a[i]>=a[i-2]+a[i-1])
                {
                    c=1;
                    break;
                }
            }
        }

    }
    if(c==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(it=l.begin(); it!=l.end(); it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }

    /*for(it=l.begin(); it!=l.end(); it++)
    {
        cout<<*it<<" ";
    }*/



    return 0;
}
