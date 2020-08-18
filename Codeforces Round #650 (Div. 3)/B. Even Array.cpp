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

    int t,n,x;

    cin>>t;

    while(t--)
    {
        cin>>n;

        int no=0,ne=0;

        for(int i=0; i<n; i++)
        {
            cin>>x;

            if(i%2==0)
            {
                if(x%2!=0)
                    ne++;
            }
            else
            {
                if(x%2==0)
                    no++;
            }


        }

        if(no==ne)
            cout<<no<<endl;
        else
            cout<<-1<<endl;


    }




    return 0;
}
