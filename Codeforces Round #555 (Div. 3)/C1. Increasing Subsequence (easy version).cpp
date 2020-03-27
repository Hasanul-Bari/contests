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
    {
        cin>>a[i];
    }
    string s;

    int l=0,r=n-1,x;

    if(a[l]<a[r])
    {
        s=s+'L';
        x=a[l];
        l--;

    }
    else if(a[l]>a[r])
    {
        s=s+'R';
        x=a[r];
        r--;
    }
    while(1)
    {

        if(l==r)
        {
            if(x<a[l])
                s=s+'L';

            break;
        }

        if(x<a[l] || x<a[r])
        {
            if(x<a[l] && x<a[r])
            {


                if(a[l]<a[r])
                {
                    s=s+'L';
                    x=a[l];
                    l--;

                }
                else if(a[l]>a[r])
                {
                    s=s+'R';
                    x=a[r];
                    r--;
                }
            }

            else if(x<a[l] && x>a[r])
            {
                s=s+'L';
                x=a[l];
                l--;

            }

            else if(x>a[l] && x<a[r])
            {
                s=s+'R';
                x=a[r];
                r--;
            }

        }
        else
            break;



    }

    cout<<s.length()<<endl;
    cout<<s<<endl;










    return 0;
}
