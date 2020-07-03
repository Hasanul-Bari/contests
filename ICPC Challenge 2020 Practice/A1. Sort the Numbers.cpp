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

    ifstream fin("sort.in");
    int n;

    fin>>n;

    int a[n];

    //cout<<n<<endl;

    for(int i=0; i<n; i++)
    {
        fin>>a[i];
        //cout<<a[i]<<endl;
    }

    fin.close();

    sort(a,a+n);

    ofstream fout("out.txt");

    //fout<<n<<endl;

    for(int i=0; i<n; i++)
    {
        fout<<a[i]<<" ";
    }

    fout<<endl;

    fout.close();





    return 0;
}
