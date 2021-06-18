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
        int a[n];

        a[0]=a1;
        a[1]=a2;

        for(int i=2; i<n; i++)
        {
            a[i]=(x * a[i - 1] + y * a[i - 2] + z) % m;
        }

        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<endl;
        }

        return 0;

     }

};

int main()
{
    faster

    YetAnotherGraphColoring d;
    d.minColors(5,987654321,123456789,12345,678,9,1000000000);



    return 0;
}
