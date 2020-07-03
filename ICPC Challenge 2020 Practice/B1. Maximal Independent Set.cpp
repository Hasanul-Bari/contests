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

    ifstream fin("b1.in");
    int n,m;

    fin>>n>>m;

    int x[m],y[m];

    //cout<<n<<endl;

    for(int i=0; i<m; i++)
    {
        fin>>x[i]>>y[i];
        //cout<<x[i]<<" "<<y[i]<<endl;
    }

    fin.close();


    ofstream fout("outb1.txt");

    fout<<n<<" "<<m<<endl;

    for(int i=0; i<m; i++)
    {
        fout<<x[i]<<" "<<y[i]<<endl;
    }

    fout<<endl;

    fout.close();





    return 0;
}

