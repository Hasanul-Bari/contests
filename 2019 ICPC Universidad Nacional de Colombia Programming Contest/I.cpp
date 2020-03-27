#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    faster

    string t;
    int c=0;
    cin>>t;

    int n=t.length();

    for(int i=0; i<n; i++)
    {
        if(isdigit(t[i]))
        {
            cout<<t[i];
            c++;
        }
        else
            break;
    }

    if(c==0)
        cout<<-1<<endl;
    else
        cout<<endl;




    return 0;
}
