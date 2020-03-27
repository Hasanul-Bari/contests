#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsignd long long
using namespace std;

int main()
{
    faster
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];

    }
    int _2=_4=_8=_16=1;
    int c=1
          for(int i=1; i<n; i++)
    {
        if(a[i]<=a[i+1])
        {
            c++;
            _4++;
            _8++;
            _16++
        }
        if(a[i]<=a[i+1] && i%2!=0)
        {
            v.push_back(2);
        }
        if(i==4)
        {
            if(_4>=4)
            {
                v.push_back(4);
            }
            _4=1;
        }

        if(i==8)
        {
            if(_4>=4)
            {
                v.push_back(4);
            }
            _4=1;
            if(_8>=8)
            {
                v.push_back(8);
                _8=1;
            }

            if(i==12)
            {
                if(_4>=4)
                {
                    v.push_back(4);
                }
                _4=1;
            }
            if(i==15)
            {
                if(_4>=4)
                {
                    v.push_back(4);
                }
                _4=1;

                if(_8>=8)
                {
                    v.push_back(8);
                    _8=1;
                }

                if(_16>=16)
                {
                    v.push_back(16);
                }
            }



        }


        return 0;
    }
