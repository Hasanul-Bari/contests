#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

class YetAnotherGraphColoring
{
public:
     int minColors(int n, int a1, int a2, int x, int y, int z, int m)
     {
        long long a[n];

        a[0]=a1;
        a[1]=a2;

        long long xx=x;
        long long yy=y;
        long long zz=z;
        long long mm=m;

        for(int i=2; i<n; i++)
        {
            a[i]=(xx * a[i - 1] + yy * a[i - 2] + zz) % mm;
        }

        /*for(int i=0; i<n; i++)
        {
            cout<<a[i]<<endl;
        }*/

        long long curr,c=0;

        for(int i=n-1; i>=0; i--)
        {
            if(i==n-1)
            {
                curr=a[i];
                c++;
            }
            else if(curr<a[i])
            {
                curr=a[i];
                c++;
            }
        }

        return c;

     }

};

int main()
{
    faster

    YetAnotherGraphColoring d;
    cout<<d.minColors(5,987654321,123456789,12345,678,9,1000000000)<<endl;
    cout<<d.minColors(100,10,20,1,0,10,123456789)<<endl;




    return 0;
}
